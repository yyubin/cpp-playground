//
// Created by 박유빈 on 2023/05/27.
//

#include <cstdio>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i : arr) {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    for (int *ptr = arr; ptr < arr + 10; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");
}