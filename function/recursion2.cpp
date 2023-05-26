//
// Created by 박유빈 on 2023/05/27.
//

// 팩토리얼
// 5! = 5*4*3*2*1 = 120
// n! = n * (n-1)!

#include "cstdio"

int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n-1);
}

int main() {
    int result = factorial(5);
    printf("%d\n", result);
}
