//
// Created by 박유빈 on 2023/05/28.
//

// 상수 : 변하지 않는 수
// 변수 : 변할 수 있는 수
// const, 매크로, enum

#include "cstdio"
// 별칭, 매크로
#define PI 3.141592

int main() {
    // const float PI = 3.141592;

    float a = PI;

    printf("PI = %.2f\n", PI);
    printf("&PI = %d\n", PI);
}