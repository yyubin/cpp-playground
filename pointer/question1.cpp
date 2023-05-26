//
// Created by 박유빈 on 2023/05/27.
//

/*
 * 100개 이하의 정수를 입력받아
 * 첫 줄에 짝수 번째 숫자들을 순서대로 출력하고
 * 다음 줄에 홀수 번째 숫자들을 순서대로 출력하는 프로그
 *
 * 입력 예
 * 7
 * 3 1 4 1 5 9 2
 *
 * 출력 예
 * 1 1 9
 * 3 4 5 2
 */

#include "cstdio"

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) {
        scanf(" %d", &arr[i]);
    }

    for (int i=0; i<n; i++) {
        if (i%2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    for (int i=0; i<n; i++) {
        if (i%2 == 0) {
            printf("%d ", arr[i]);
        }
    }

}