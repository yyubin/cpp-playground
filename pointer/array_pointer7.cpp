//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("%d\n", sizeof(arr)); //24
    printf("%d\n", sizeof(arr[0])); //12
    printf("%d\n", sizeof(arr[0][0])); // 4

    printf("%d\n", &arr);
    printf("%d\n", &arr[0]);
    printf("%d\n", &arr[0][0]);

}
