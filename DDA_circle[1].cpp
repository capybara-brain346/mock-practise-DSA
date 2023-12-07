#include <iostream>
#include <graphics.h>
#include <cmath>

using namespace std;

void drawPixel(int xc, int yc, int x, int y) {
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc - x, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
}

void dda_circle(int xc, int yc, int r) {
    float x, y, dx, dy, length;

    x = r;
    y = 0;
    dx = 1;
    dy = 1;
    length = r / sqrt(2);

    while (x > length) {
        drawPixel(xc, yc, round(x), round(y));

        x = x - dx;
        y = y + dy;

        length = length + r / sqrt(2);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int xc, yc, r;

    cout << "Enter coordinates of center (xc yc): ";
    cin >> xc >> yc;

    cout << "Enter radius (r): ";
    cin >> r;

    dda_circle(xc, yc, r);

    delay(5000);
    closegraph();

    return 0;
}

