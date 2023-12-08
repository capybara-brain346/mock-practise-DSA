#include <iostream>
#include <graphics.h>
#include <cmath>

using namespace std;

struct Point3D {
    int x, y, z;
};

struct Cube {
    Point3D vertices[8];
};

void drawCube(Cube cube) {
    line(cube.vertices[0].x, cube.vertices[0].y, cube.vertices[1].x, cube.vertices[1].y);
    line(cube.vertices[1].x, cube.vertices[1].y, cube.vertices[2].x, cube.vertices[2].y);
    line(cube.vertices[2].x, cube.vertices[2].y, cube.vertices[3].x, cube.vertices[3].y);
    line(cube.vertices[3].x, cube.vertices[3].y, cube.vertices[0].x, cube.vertices[0].y);

    line(cube.vertices[4].x, cube.vertices[4].y, cube.vertices[5].x, cube.vertices[5].y);
    line(cube.vertices[5].x, cube.vertices[5].y, cube.vertices[6].x, cube.vertices[6].y);
    line(cube.vertices[6].x, cube.vertices[6].y, cube.vertices[7].x, cube.vertices[7].y);
    line(cube.vertices[7].x, cube.vertices[7].y, cube.vertices[4].x, cube.vertices[4].y);

    line(cube.vertices[0].x, cube.vertices[0].y, cube.vertices[4].x, cube.vertices[4].y);
    line(cube.vertices[1].x, cube.vertices[1].y, cube.vertices[5].x, cube.vertices[5].y);
    line(cube.vertices[2].x, cube.vertices[2].y, cube.vertices[6].x, cube.vertices[6].y);
    line(cube.vertices[3].x, cube.vertices[3].y, cube.vertices[7].x, cube.vertices[7].y);
}

void scaleCube(Cube &cube, float scaleX, float scaleY, float scaleZ) {
    for (int i = 0; i < 8; ++i) {
        cube.vertices[i].x = round(cube.vertices[i].x * scaleX);
        cube.vertices[i].y = round(cube.vertices[i].y * scaleY);
        cube.vertices[i].z = round(cube.vertices[i].z * scaleZ);
    }
}

void translateCube(Cube &cube, int dx, int dy, int dz) {
    for (int i = 0; i < 8; ++i) {
        cube.vertices[i].x += dx;
        cube.vertices[i].y += dy;
        cube.vertices[i].z += dz;
    }
}

void rotateCube(Cube &cube, float angleX, float angleY, float angleZ) {
    for (int i = 0; i < 8; ++i) {
        float tempX = cube.vertices[i].x;
        float tempY = cube.vertices[i].y;
        float tempZ = cube.vertices[i].z;

        // Rotation around X-axis
        cube.vertices[i].y = round(tempY * cos(angleX) - tempZ * sin(angleX));
        cube.vertices[i].z = round(tempY * sin(angleX) + tempZ * cos(angleX));

        // Rotation around Y-axis
        cube.vertices[i].x = round(tempX * cos(angleY) + tempZ * sin(angleY));
        cube.vertices[i].z = round(-tempX * sin(angleY) + tempZ * cos(angleY));

        // Rotation around Z-axis
        cube.vertices[i].x = round(tempX * cos(angleZ) - tempY * sin(angleZ));
        cube.vertices[i].y = round(tempX * sin(angleZ) + tempY * cos(angleZ));
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    Cube cube;
    cube.vertices[0] = {50, 50, 50};
    cube.vertices[1] = {150, 50, 50};
    cube.vertices[2] = {150, 150, 50};
    cube.vertices[3] = {50, 150, 50};
    cube.vertices[4] = {50, 50, 150};
    cube.vertices[5] = {150, 50, 150};
    cube.vertices[6] = {150, 150, 150};
    cube.vertices[7] = {50, 150, 150};

    // Original cube
    drawCube(cube);
    delay(1000);

    // Scaling
    cleardevice();
    scaleCube(cube, 1.5, 0.5, 2);
    drawCube(cube);
    delay(1000);

    // Translation
    cleardevice();
    translateCube(cube, 50, 30, 20);
    drawCube(cube);
    delay(1000);

    // Rotation
    cleardevice();
    rotateCube(cube, 0.2, 0.3, 0.4);
    drawCube(cube);
    delay(1000);

    closegraph();

    return 0;
}

