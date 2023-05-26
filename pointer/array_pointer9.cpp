//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int (*row)[3] = arr; row < arr+2; row++) {
        for (int *col = *row; col < *row + 3; col++){
            printf("%d ", *col);
        }
        printf("\n");
    }
}
