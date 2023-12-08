#include <iostream>
#include <graphics.h>

using namespace std;

struct Point {
    int x, y, z;
};

struct Cube {
    Point vertices[8];
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

void translateCube(Cube &cube, int tx, int ty, int tz) {
    for (int i = 0; i < 8; i++) {
        cube.vertices[i].x += tx;
        cube.vertices[i].y += ty;
        cube.vertices[i].z += tz;
    }
}

int main() {
    initwindow(1000, 800);

    setcolor(WHITE);

    Cube cube;

    cube.vertices[0] = {50, 50, 50};
    cube.vertices[1] = {100, 50, 50};
    cube.vertices[2] = {100, 100, 50};
    cube.vertices[3] = {50, 100, 50};
    cube.vertices[4] = {50, 50, 100};
    cube.vertices[5] = {100, 50, 100};
    cube.vertices[6] = {100, 100, 100};
    cube.vertices[7] = {50, 100, 100};

    drawCube(cube);

    setcolor(RED);

    int tx, ty, tz;
    cout << "Enter the translation values (tx ty tz): ";
    cin >> tx >> ty >> tz;

    translateCube(cube, tx, ty, tz);

    drawCube(cube);

    getch();

    return 0;
}

