#include <iostream>
#include <graphics.h>

using namespace std;

const int INSIDE = 0; // 0000
const int LEFT = 1;   // 0001
const int RIGHT = 2;  // 0010
const int BOTTOM = 4; // 0100
const int TOP = 8;    // 1000

const int xMin = 50, yMin = 50, xMax = 250, yMax = 250;

int computeCode(double x, double y) {
    int code = INSIDE;

    if (x < xMin)
        code |= LEFT;
    else if (x > xMax)
        code |= RIGHT;

    if (y < yMin)
        code |= BOTTOM;
    else if (y > yMax)
        code |= TOP;

    return code;
}

void cohenSutherland(double x1, double y1, double x2, double y2) {
    int code1 = computeCode(x1, y1);
    int code2 = computeCode(x2, y2);
    bool accept = false;

    while (true) {
        if ((code1 == 0) && (code2 == 0)) {
            // Both endpoints inside the window
            accept = true;
            break;
        } else if (code1 & code2) {
            // Both endpoints are outside the same region
            break;
        } else {
            int code;
            double x, y;

            if (code1 != 0)
                code = code1;
            else
                code = code2;

            if (code & TOP) {
                // Point is above the clip window
                x = x1 + (x2 - x1) * (yMax - y1) / (y2 - y1);
                y = yMax;
            } else if (code & BOTTOM) {
                // Point is below the clip window
                x = x1 + (x2 - x1) * (yMin - y1) / (y2 - y1);
                y = yMin;
            } else if (code & RIGHT) {
                // Point is to the right of the clip window
                y = y1 + (y2 - y1) * (xMax - x1) / (x2 - x1);
                x = xMax;
            } else if (code & LEFT) {
                // Point is to the left of the clip window
                y = y1 + (y2 - y1) * (xMin - x1) / (x2 - x1);
                x = xMin;
            }

            if (code == code1) {
                x1 = x;
                y1 = y;
                code1 = computeCode(x1, y1);
            } else {
                x2 = x;
                y2 = y;
                code2 = computeCode(x2, y2);
            }
        }
    }

    if (accept) {
        setcolor(RED);
        rectangle(xMin, yMin, xMax, yMax); // Draw the clipping window
        setcolor(WHITE);
        line(x1, y1, x2, y2); // Draw the clipped line
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    double x1, y1, x2, y2;

    cout << "Enter the endpoints of the line (x1 y1 x2 y2): ";
    cin >> x1 >> y1 >> x2 >> y2;

    setcolor(WHITE);
    line(x1, y1, x2, y2); // Draw the original line

    cohenSutherland(x1, y1, x2, y2);

    delay(5000); // Display the window for 5 seconds before closing
    closegraph();

    return 0;
}

