#include <iostream>
#include <graphics.h>
using namespace std;

void dda_line(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps, k;
    float xIncrement, yIncrement, x = x1, y = y1;

    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);

    xIncrement = static_cast<float>(dx) / static_cast<float>(steps);
    yIncrement = static_cast<float>(dy) / static_cast<float>(steps);

    for (k = 0; k < steps; k++) {
        x += xIncrement;
        y += yIncrement;
        putpixel((x), (y), WHITE);
    }
}

int main() {
    initwindow(1000, 800);

    int x1, y1, x2, y2;

    cout << "Enter coordinates of first point (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of second point (x2 y2): ";
    cin >> x2 >> y2;

    dda_line(x1, y1, x2, y2);
    getch();
    
    return 0;
}

