//
// Created by 박유빈 on 2023/05/27.
//

#include <cstdio>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("arr의 값 : %d\n", arr); // arr = &arr[0]
    printf("%d\n", arr + 1); // arr + 1 = &arr[0] + 1 = &arr[1]

    for (int i = 0; i < 10; i++) {
        printf("&arr[%d] = %d\n", i, &arr[i]);
        printf("arr + %d = %d\n", i, arr + i);
    }
}