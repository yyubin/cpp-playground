#include <cstdio>

// 포인터(pointer): 변수의 주소를 저장하는 변수

int main() {
    int a = 20;
    char c = 'h';

    // 포인터 선언
    int *ptr_a;
    char *ptr_c;

    // 주솟값
    ptr_a = &a;
    ptr_c = &c;

    printf("a의 값 : %d\n", a);
    printf("a의 주솟값 : %d\n", &a);
    printf("ptr_a에 저장된 값 : %d\n", ptr_a);
    printf("ptr_a가 가리키는 변z수의 값 : %d\n", *ptr_a);
}
