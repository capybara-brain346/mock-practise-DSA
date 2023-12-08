#include <iostream>
#include <graphics.h>
using namespace std;

void drawCircle(int xc, int yc, int r) {
    int x = r;
    int y = 0;
    int d = 1 - r;

    while (y <= x) {
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - y, yc + x, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc - y, yc - x, WHITE);

        if (d <= 0) {
            d += 2 * y + 3;
        } else {
            d += 2 * (y - x) + 5;
            x--;
        }
        y++;
    }
}

int main() {
    initwindow(1000, 800);

    int xc, yc, radius;
    cout<<"Enter Xc, Yc and radius of circle:";
    cin>>xc>>yc>>radius;

    drawCircle(xc, yc, radius); // Draw the circle

    getch();
    
    return 0;
}

