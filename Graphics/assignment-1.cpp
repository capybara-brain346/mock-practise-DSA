#include <iostream>
#include <graphics.h>
#include <conio.h>

using namespace std;

// Function to draw a line from (x1, y1) to (x2, y2)
void drawLine(int x1, int y1, int x2, int y2) {
    line(x1, y1, x2, y2);
}

// Function to fill the polygon using scan-fill algorithm
void scanFill(int x[], int y[], int edges) {
    int i, j, temp;
    int x_intersect, ymax;
    int flag = 0;
    int fill_color = YELLOW; // Change this to your desired color

    for (int y_scan = 0; y_scan < getmaxy(); y_scan++) {
        for (i = 0, j = edges - 1; i < edges; j = i++) {
            if ((y[i] < y_scan && y[j] >= y_scan) || (y[j] < y_scan && y[i] >= y_scan)) {
                x_intersect = int(x[i] + (double)(y_scan - y[i]) / (y[j] - y[i]) * (x[j] - x[i]));
                if (flag == 0) {
                    flag = 1;
                    temp = x_intersect;
                } else {
                    drawLine(temp, y_scan, x_intersect, y_scan);
                    delay(50); // Adjust this delay based on your preference
                    temp = x_intersect;
                }
            }
        }
        flag = 0;
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int edges;
    cout << "Enter the number of edges of the polygon: ";
    cin >> edges;

    int x[edges], y[edges];

    cout << "Enter the coordinates of the polygon:" << endl;
    for (int i = 0; i < edges; i++) {
        cout << "Enter x[" << i << "]: ";
        cin >> x[i];
        cout << "Enter y[" << i << "]: ";
        cin >> y[i];
    }

    // Draw the concave polygon
    for (int i = 0; i < edges; i++) {
        int j = (i + 1) % edges;
        drawLine(x[i], y[i], x[j], y[j]);
    }

    // Fill the concave polygon using scan-fill algorithm
    scanFill(x, y, edges);

    getch();
    closegraph();
    return 0;
}

