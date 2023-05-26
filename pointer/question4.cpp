//
// Created by 박유빈 on 2023/05/27.
//

/*
 * 10 * 10 이하의 정수형 이차원 배열을 입력받아
 * 그 배열의 각 행 요소의 합을 출력
 *
 * 입력 예
 * 3 4
 * 4 2 6 3
 * 7 9 3 4
 * 5 1 2 1
 *
 * 출력 예
 * 15
 * 23
 * 9
 */

#include "cstdio"

int main() {
    int n;
    int m;
    scanf("%d %d", &n, &m);

    int arr[n][m];

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            scanf(" %d", &arr[i][j]);
        }
    }

    for (int i=0; i<n; i++) {
        int sum = 0;
        for (int j=0; j<m; j++) {
            sum += arr[i][j];
        }
        printf("%d\n", sum);
    }
}
