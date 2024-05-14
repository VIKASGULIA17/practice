#include <stdio.h>
struct Point {
    int x;
    int y;
};
struct Circle {
    struct Point center;
    int radius;
};
struct Rectangle {
    struct Point bottomLeft;
    struct Point topRight;
};
struct Polygon {
    struct Point vertices[10];
    int numberOfVertices;
};
void main() {

    struct Point arrPoint[5];
    arrPoint[0].x = 1;
    arrPoint[0].y = 2;
    struct Polygon poly;
    poly.vertices[0].x = 1;
    poly.vertices[0].y = 2;
    poly.numberOfVertices = 5;
    int i;
    for(i = 0; i < poly.numberOfVertices; i++) {
        printf("Point %d: (%d, %d)\n", i+1, poly.vertices[i].x, poly.vertices[i].y);
    }
}