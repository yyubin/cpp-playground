//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"

int main() {
    int arr[3] = {1, 2, 3};
    int *ptr = arr;

    for (int i=0; i<3; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    for (int i=0; i<3; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // arr[i] == *(arr+i) == *(ptr+i) == *(i+ptr) == i[ptr]
    for (int i=0; i<3; i++) {
        printf("%d ", i[ptr]);
    }
    printf("\n");
}
