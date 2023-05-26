//
// Created by 박유빈 on 2023/05/27.
//
/*
 * 1. 정수 하나를 매개변수로 받아
 * 그 수가 짝수이면 0, 홀수면 1 반환함수 작성
 */

#include "cstdio"

int parity(int n) {
    return (n%2 + 2)%2;
}

int main() {
    printf("%d\n", parity(5));
    printf("%d\n", parity(-3));
    printf("%d\n", parity(6));

}
