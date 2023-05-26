//
// Created by 박유빈 on 2023/05/27.
//

// 재귀 함수
#include "cstdio"

void rec(int n) {
    if(n > 5) return;

    printf("n = %d\n", n);
    rec(n+1);
}

int main() {
    rec(1);
}
