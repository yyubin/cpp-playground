//
// Created by 박유빈 on 2023/05/28.
//

#include "iostream"

using namespace std;

int main() {
    // 초기화
    // int a = 10;
    int a(10);
    int b(5);

    cout << a << endl;
    cout << b << endl;

    // 범위 기반 for문
    int arr[10] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    for (int i: arr) {
        cout << i << ' ';
        i++; // 작동 x i는 arr내부의 값을 의미하는게 아닌 포문안에서 사용되는 다른 객체
    }
    cout << endl;

    for (int &i: arr) { // 레퍼런스 변수
        cout << i << ' ';
        i++;
    }
    cout << endl;

    for (int i: arr) {
        cout << i << ' ';
    }
    cout << endl;

    // 레퍼런스 변수
    int c(5);
    int &p = c;
    p = 10;

    cout << p << endl;
    cout << c << endl;

    int d(5);
    int &r1 = a;
    // int &r2 = 3; // 상수를 가리킬 수 없음
    // int &r3 = a * a;

    // r-value vs. l-value
    // 수정할 수 있는 값 vs. 수정할 수 있는 값
     int &&r2 = 3;
     int &&r3 = a * a;
}