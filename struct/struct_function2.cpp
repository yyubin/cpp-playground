//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"

struct Point {
    int x, y;

    void moveRight() { x++; }
    void moveLeft() { x--; }
    void moveUp() { y++; }
    void moveDown() { y--; }
};

int main() {
    Point p = { 2, 5 };
    p.moveDown();
    p.moveDown();

    printf("(%d, %d)\n", p.x, p.y);
}
