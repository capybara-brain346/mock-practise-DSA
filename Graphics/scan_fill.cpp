#include <iostream>
#include <graphics.h>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

struct Point {
    int x, y;
};

void drawPolygon(const vector<Point>& vertices) {
    for (size_t i = 0; i < vertices.size(); i++) {
        size_t next = (i + 1) % vertices.size();
        line(vertices[i].x, vertices[i].y, vertices[next].x, vertices[next].y);
    }
}

void scanFill(const vector<Point>& vertices, int fill_color) {
    int minY = INT_MAX, maxY = INT_MIN;

    for (const Point& vertex : vertices) {3
        minY = min(minY, vertex.y);
        maxY = max(maxY, vertex.y);
    }

    for (int i = minY; i <= maxY; i++) {
        vector<int> intersections;

        for (size_t j = 0; j < vertices.size(); j++) {
            size_t next = (j + 1) % vertices.size();

            if ((vertices[j].y <= i && vertices[next].y > i) || (vertices[next].y <= i && vertices[j].y > i)) {
                float slope = static_cast<float>(vertices[next].x - vertices[j].x) / (vertices[next].y - vertices[j].y);
                int x = round(vertices[j].x + slope * (i - vertices[j].y));

                intersections.push_back(x);
            }
        }

        sort(intersections.begin(), intersections.end());

        for (size_t k = 0; k < intersections.size(); k += 2) {
            setcolor(fill_color);
            line(intersections[k], i, intersections[k + 1], i);
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int n;
    cout << "Enter the number of vertices of the concave polygon: ";
    cin >> n;

    vector<Point> vertices(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter the coordinates of vertex " << i + 1 << " (x y): ";
        cin >> vertices[i].x >> vertices[i].y;
    }

    // Draw the concave polygon
    drawPolygon(vertices);

    // Fill the concave polygon
    int fill_color;
    cout << "Enter the color code for filling: ";
    cin >> fill_color;

    scanFill(vertices, fill_color);

    delay(5000);  // Display the window for 5 seconds before closing
    closegraph();

    return 0;
}

