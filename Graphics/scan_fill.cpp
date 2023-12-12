#include <iostream>
#include <graphics.h>

using namespace std;

// Function to draw a line from (x1, y1) to (x2, y2)
void drawLine(int x1, int y1, int x2, int y2) {
    line(x1, y1, x2, y2);
}

// Function to implement the scanline fill algorithm
void scanFill(int x[], int y[], int edges) {
    int i, j, temp, xIntersect;
    
    for (int yScan = 0; yScan < getmaxy(); yScan++) {
        for (i = 0, j = edges - 1; i < edges; j = i++) {
            if ((y[i] > yScan && y[j] < yScan) || (y[j] > yScan && y[i] < yScan)) {
                xIntersect = static_cast<int>((x[i] + (yScan - y[i]) * 1.0 / (y[j] - y[i]) * (x[j] - x[i])));
                if (x[i] > x[j]) {
                    temp = x[i];
                    x[i] = x[j];
                    x[j] = temp;
                }
                if (xIntersect >= x[i] && xIntersect <= x[j]) {
                    drawLine(x[i], yScan, xIntersect, yScan);
                }
            }
        }
    }
}

int main() {
    initwindow(800,600);

    // Number of vertices of the polygon
    int edges = 4;

    // Coordinates of the polygon vertices
    int x[] = {100, 200, 300, 200};
    int y[] = {100, 200, 100, 50};

    // Drawing the polygon
    drawLine(x[0], y[0], x[1], y[1]);
    drawLine(x[1], y[1], x[2], y[2]);
    drawLine(x[2], y[2], x[3], y[3]);
    drawLine(x[3], y[3], x[0], y[0]);

    // Calling the scanFill function to fill the polygon
    scanFill(x, y, edges);
    delay(10000);

    return 0;
}

