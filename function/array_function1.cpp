//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"

// call-by-reference
void printArr(int *arr) {
    for (int i=0; i<4; i++) {
        arr[i] *= 2; // arr[i] = *(arr+i)
    }
}

int main() {
    int arr[4] = {1, 2, 3, 4};
    printArr(arr); // arr = &arr[0]

    for (int i = 0; i < 4; ++i) {
        printf("%d\n", arr[i]);
    }
}