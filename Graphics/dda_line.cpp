#include <iostream>
#include <graphics.h>
#include <cmath>>
using namespace std;

void drawLine(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;

    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float xIncrement = dx / (float)steps;
    float yIncrement = dy / (float)steps;

    float x = x1;
    float y = y1;

    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), WHITE);

        x += xIncrement;
        y += yIncrement;
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int x1, y1, x2, y2;

    cout << "Enter the starting point (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the ending point (x2 y2): ";
    cin >> x2 >> y2;

    drawLine(x1, y1, x2, y2);

    delay(5000);  // Display the window for 5 seconds before closing
    closegraph();

    return 0;
}

