//
// Created by 박유빈 on 2023/05/28.
//

#include "cstdio"

typedef int Point[2];
typedef Point *PointPtr;

int main() {
    Point p = {3, 4};
    PointPtr pp = &p;

    printf("%d %d %d\n", **pp, (*pp)[0], (*pp)[1]); // 3, 3, 4
    // **pp == *(*pp) == *p == p[0]
}
