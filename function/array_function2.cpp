//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"

// call-by-reference
void printArr(int (*arr)[3]) {
    for (int i=0; i<2; i++) {
        for (int j = 0; j < 3; ++j) {
            arr[i][j] *= 2;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printArr(arr);
}
