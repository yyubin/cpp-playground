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
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int (*ptr)[3] = arr;

    // 1. ptr[i] == arr[i]
    // 2. ptr[i][j] == arr[i][j]
    // ptr == arr

    for (int i=0; i<2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
}