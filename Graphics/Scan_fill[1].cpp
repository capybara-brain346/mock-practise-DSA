#include <iostream>
#include <graphics.h>
using namespace std;

bool isInside(int x, int y, int polyX[], int polyY[], int vertices) {
    int i, j, count = 0;
    for (i = 0, j = vertices - 1; i < vertices; j = i++) {
        if (((polyY[i] > y) != (polyY[j] > y)) &&
            (x < (polyX[j] - polyX[i]) * (y - polyY[i]) / (polyY[j] - polyY[i]) + polyX[i])) {
            count++;
        }
    }
    return count % 2 == 1;
}

void scanFill(int polyX[], int polyY[], int vertices, int fill_color) {
    int minX, maxX, minY, maxY;
    minX = maxX = polyX[0];
    minY = maxY = polyY[0];
    for (int i = 1; i < vertices; i++) {
        minX = min(minX, polyX[i]);
        maxX = max(maxX, polyX[i]);
        minY = min(minY, polyY[i]);
        maxY = max(maxY, polyY[i]);
    }
    for (int y = minY; y <= maxY; y++) {
        for (int x = minX; x <= maxX; x++) {
            if (isInside(x, y, polyX, polyY, vertices)) {
                putpixel(x, y, fill_color);
            }
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm,NULL);
    int vertices;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    int polyX[vertices], polyY[vertices];
    cout << "Enter the coordinates of the vertices (x y):" << endl;
    for (int i = 0; i < vertices; i++) {
        cin >> polyX[i] >> polyY[i];
    }
    
    int fill_color = RED;
    drawpoly(vertices, polyX);
    scanFill(polyX, polyY, vertices, fill_color);
    delay(5000);
    closegraph();
    return 0;
}

