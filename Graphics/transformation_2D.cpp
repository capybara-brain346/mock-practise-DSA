#include <iostream>
#include <graphics.h>
#include <cmath>

using namespace std;

struct Point2D {
    int x, y;
};

struct Cube {
    Point2D vertices[8];
};

void drawCube(Cube cube) {
    line(cube.vertices[0].x, cube.vertices[0].y, cube.vertices[1].x, cube.vertices[1].y);
    line(cube.vertices[1].x, cube.vertices[1].y, cube.vertices[2].x, cube.vertices[2].y);
    line(cube.vertices[2].x, cube.vertices[2].y, cube.vertices[3].x, cube.vertices[3].y);
    line(cube.vertices[3].x, cube.vertices[3].y, cube.vertices[0].x, cube.vertices[0].y);
}

void scaleCube(Cube &cube, float scaleX, float scaleY) {
    for (int i = 0; i < 4; ++i) {
        cube.vertices[i].x = round(cube.vertices[i].x * scaleX);
        cube.vertices[i].y = round(cube.vertices[i].y * scaleY);
    }
}

void translateCube(Cube &cube, int dx, int dy) {
    for (int i = 0; i < 4; ++i) {
        cube.vertices[i].x += dx;
        cube.vertices[i].y += dy;
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    Cube cube;
    cube.vertices[0] = {50, 50};
    cube.vertices[1] = {150, 50};
    cube.vertices[2] = {150, 150};
    cube.vertices[3] = {50, 150};
    

    // Original cube
    drawCube(cube);
    delay(1000);

    // Scaling
    cleardevice();
    scaleCube(cube, 1.5, 0.5);
    drawCube(cube);
    delay(1000);

    // Translation
    cleardevice();
    translateCube(cube, 50, 30);
    drawCube(cube);
    delay(1000);

    closegraph();

    return 0;
}

