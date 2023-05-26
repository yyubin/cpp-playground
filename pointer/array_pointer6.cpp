//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"

// 배열 포인터

int main() {
    int arr[3] = {1, 2, 3};

    int(*ptr_arr)[3]; // 길이가 3인 int형 배열을 가리키는 포인터 선
    ptr_arr = &arr; // &arr[0]

    for (int i=0; i<3; i++) {
        printf("%d ", (*ptr_arr)[i]);
    }
}
