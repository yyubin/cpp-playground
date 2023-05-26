//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"

void rec(int n) {
    if (n==0) return;
    printf("%d", n);
    rec(n-1);
    printf("%d", n);
}

int main() {
    rec(5);
}
