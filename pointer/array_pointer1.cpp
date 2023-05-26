//
// Created by 박유빈 on 2023/05/27.
//

#include <cstdio>

int main() {
    int a = 10;
    int *ptr_a = &a;

    printf("ptr_a의 값 : %d\n", ptr_a);
    printf("ptr_a + 1의 값 : %d\n", ptr_a + 1); // +4
}