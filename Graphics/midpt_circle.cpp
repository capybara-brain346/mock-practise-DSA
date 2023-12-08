#include <iostream>
#include <graphics.h>

void drawCircle(int xc, int yc, int radius) {
    int x = radius;
    int y = 0;
    int error = 1 - x;

    while (x >= y) {
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - y, yc + x, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc - y, yc - x, WHITE);

        y++;

        if (error < 0)
            error += 2 * y + 1;
        else {
            x--;
            error += 2 * (y - x) + 1;
        }
    }
}

int main() {
    initwindow(1000, 800);

    int xc = 320, yc = 240, radius = 100; // Center and radius of the circle

    drawCircle(xc, yc, radius); // Draw the circle

    getch();
    
    return 0;
}

