//
// Created by 박유빈 on 2023/05/28.
//

#include "cstdio"

#define SQUARE(X) ((X) * (X))

//int square(int a) {
//    return a * a;
//}

int main() {
    int a;
    scanf("%d", &a);
    printf("%d\n", 100 / SQUARE(a));
    printf("%d\n", SQUARE(a-1));
}