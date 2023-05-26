//
// Created by 박유빈 on 2023/05/27.
//

/*
 * 1. ptr == &ptr[0]
 * 2. *ptr == ptr[0]
 * 3. ptr + 1 == ptr의 sizeof(*ptr)을 더한 값
 */

#include "cstdio"

int main() {
    int arr[3] = {1, 2, 3};

    printf("arr = %d\n", arr);
    printf("arr + 1 = %d\n", arr + 1);

    printf("&arr = %d\n", &arr);

    // arr의 크기가 12byte, &arr[0]에 12 더한값 출력됨
    printf("&arr + 1 = %d\n", &arr + 1);
}
