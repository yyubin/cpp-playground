//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"

int main() {
    int arr[3][3] = {0};

    printf("%d\n", &arr); // arr의첫번째 요소의 주솟값
    printf("%d\n", arr); // arr의 첫번째 요소의 주솟값
    printf("%d\n", *arr); // arr의 첫번째 요소의 주솟값

    printf("%d\n", &arr[0]); // arr[0]의 첫번째 요소의 주솟값
    printf("%d\n", arr[0]); // arr[0]의 첫번째 요소의 주솟값
    printf("%d\n", *arr[0]); // arr[0]의 첫번째 요소의 값

    printf("%d\n", &arr[0][0]); // arr[0][0] 주솟값

    printf("%d\n", arr[0][0]); // 0
}
