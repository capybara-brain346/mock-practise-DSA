#include <iostream>
#include <graphics.h>
#include <cmath>

using namespace std;

struct Point {
    int x, y;
};

void drawRectangle(Point p1, Point p2) {
    rectangle(p1.x, p1.y, p2.x, p2.y);
}

void scaleRectangle(Point &p1, Point &p2, float scaleX, float scaleY) {
    p1.x = round(p1.x * scaleX);
    p1.y = round(p1.y * scaleY);
    p2.x = round(p2.x * scaleX);
    p2.y = round(p2.y * scaleY);
}

void translateRectangle(Point &p1, Point &p2, int dx, int dy) {
    p1.x += dx;
    p1.y += dy;
    p2.x += dx;
    p2.y += dy;
}

void rotateRectangle(Point &p1, Point &p2, float angle) {
    float radianAngle = angle * (M_PI / 180.0);
    int centerX = (p1.x + p2.x) / 2;
    int centerY = (p1.y + p2.y) / 2;

    int tempX1 = p1.x - centerX;
    int tempY1 = p1.y - centerY;

    int tempX2 = p2.x - centerX;
    int tempY2 = p2.y - centerY;

    p1.x = round(tempX1 * cos(radianAngle) - tempY1 * sin(radianAngle)) + centerX;
    p1.y = round(tempX1 * sin(radianAngle) + tempY1 * cos(radianAngle)) + centerY;

    p2.x = round(tempX2 * cos(radianAngle) - tempY2 * sin(radianAngle)) + centerX;
    p2.y = round(tempX2 * sin(radianAngle) + tempY2 * cos(radianAngle)) + centerY;
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    Point p1 = {100, 100};
    Point p2 = {200, 200};

    // Original rectangle
    drawRectangle(p1, p2);
    delay(1000);

    // Scaling
    cleardevice();
    scaleRectangle(p1, p2, 1.5, 0.5);
    drawRectangle(p1, p2);
    delay(1000);

    // Translation
    cleardevice();
    translateRectangle(p1, p2, 50, 30);
    drawRectangle(p1, p2);
    delay(1000);

    // Rotation
    cleardevice();
    rotateRectangle(p1, p2, 45);
    drawRectangle(p1, p2);
    delay(1000);

    closegraph();

    return 0;
}

