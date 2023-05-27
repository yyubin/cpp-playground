//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"
struct Point { int x, y; };

int main() {
    // typedef struct { int x, y; } Point;
    Point p{};
    // == struct { int x, y} Point p;

    p.x = 3;
    p.y = 4;

    printf("(%d, %d)\n", p.x, p.y);
    printf("sizeof(p) = %d\n", sizeof(p));

    /*
     * typedef int Int32;
     * Int32 n; // int n;
     */
}


