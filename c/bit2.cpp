//
// Created by 박유빈 on 2023/05/28.
//

// 시프트(shift) : 옮기다

#include "cstdio"

// << 왼쪽 시프트
// 00010110
//_00101100
// 맨 앞자리는 버려짐

// >> 오른쪽 시프트

int main() {
    char a = 22; // char = -128~127

    printf("%d\n", a << 1); // 44 00101100
    printf("%d\n", a >> 1); // 11 00001011

    printf("%d\n", a << 3); // 176  // char 형이 아닌 다른 형으로 자동 형변환
    printf("%d\n", a >> 3); // 2

    printf("%d\n", a << 6); // 1408
    printf("%d\n", a >> 6); // 0
}
