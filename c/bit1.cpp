//
// Created by 박유빈 on 2023/05/28.
//

// 비트 연산
// 비트 논리 연산
// 시프트 (shift) 연산

// 논리 연산 && || !
// 비트 논리 연산 & | ^ ~

#include "cstdio"

int main() {
    char a = 12, b = 10;
    // 12 = 00001100
    // 10 = 00001010

    printf("%d\n", a&b); // 8 = 00001000 and
    printf("%d\n", a|b); // 14 = 00001110 or
    printf("%d\n", a^b); // 6 = 00000110 xor
    printf("%d\n", ~a); // -13 = 11110011 not
}
