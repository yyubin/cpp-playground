//
// Created by 박유빈 on 2023/05/28.
//

#include "iostream"
using namespace std;

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5,6}};

    // 배열 포인터
    // 1. arr == &arr[0]
    // 2. *arr == arr[0]
    // 3. arr + 1 == arr에 sizeof(*arr)를 더한 값
    for (int(*ln)[3] = arr; ln < arr + 2; ln++) {
        for (int *c = *ln; c < *ln + 3; c++) {
            cout << *c << ' ';
        }
        cout << endl;
    }

    for (int(&ln)[3]: arr) {
        for (int &col: ln) {
            cout << col << ' ';
        }
        cout << endl;
    }

//    for (int *n: arr) {
//        for (int m = 0; m < 3; m++) {
//            cout << n[m] << ' ';
//        }
//        cout << endl;
//    }
}