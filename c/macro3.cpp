//
// Created by 박유빈 on 2023/05/28.
//

#include "cstdio"

#define MAX(A, B) (((A) > (B)) ? (A) : (B))

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    printf("%d\n", max(1, 3));
    printf("%d\n", MAX(1, 3));
}