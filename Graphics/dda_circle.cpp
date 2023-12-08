#include <iostream>
#include <graphics.h>
#include <cmath>

using namespace std;

void drawCircle(int xc, int yc, int radius) {
    float x, y;
    float theta;

    for (theta = 0; theta <= 360; theta += 0.1) {
        // Convert polar coordinates to Cartesian coordinates
        x = xc + radius * cos(theta);
        y = yc + radius * sin(theta);

        // Round to the nearest integer for pixel placement
        int pixelX = round(x);
        int pixelY = round(y);

        // Plot the pixel
        putpixel(pixelX, pixelY, WHITE);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int xc, yc, radius;

    cout << "Enter the center coordinates (x y): ";
    cin >> xc >> yc;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    drawCircle(xc, yc, radius);

    delay(5000);  // Display the window for 5 seconds before closing
    closegraph();

    return 0;
}

