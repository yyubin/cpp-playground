//
// Created by 박유빈 on 2023/05/27.
//

// call-by-value
// call-by-reference

#include "cstdio"

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void swap2(int &x, int &y) {
    int tmp = x;
    x = y;
    y = tmp;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    swap2(a, b);
    printf("a = %d, b = %d\n", a, b);
}
