//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"

int main() {
    int arr[3][3] = { 0 };

    // &arr[0][0] 을 100이라고 가정
    printf("%d\n", &arr[0][0]); // 100

    printf("%d\n", arr[0] + 1); // 104 // arr[0]의 첫번째 요소에 + 1
    printf("%d\n", &arr[0] + 1); // 112
    printf("%d\n", arr + 1); // 112 // arr의 첫번째 요소에 + 1
    printf("%d\n", &arr + 1); // 136
}
