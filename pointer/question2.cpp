//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"

int main() {
    int a = 10;
    int b = 20;

    int *ptr;

    ptr = &a;
    *ptr = 30;

    ptr = &b;
    *ptr = 10;

    printf("%d\n", a); // 30
    printf("%d\n", b); // 10
    printf("%d\n", *ptr); // 10
}
