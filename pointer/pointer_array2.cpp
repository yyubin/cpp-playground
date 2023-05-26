//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"

int main() {
    int arr[4] = {1, 2, 3, 4};
    int *ptr[4];

    for (int i=0; i<4; i++) {
        ptr[i] = &arr[i];
    }

    for (int i=0; i<4; i++) {
        printf("%d ", *ptr[i]);
    }
    printf("\n");
}