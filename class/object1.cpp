//
// Created by 박유빈 on 2023/05/30.
//

// 생성자: 객체가 생성될 때 자동으로 호출되는 함수
// 소멸자: 객체가 소멸될 때 자동으로 호출되는 함수

#include "iostream"

using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "생성 호출" << endl;
    }

    ~MyClass() {
        cout << "소멸 호출" << endl;
    }
};

//MyClass globalObj;

void testLocalObj() {
    cout << "testLocalObj함수 시작" << endl;
    MyClass localobj;
    cout << "testLocalObj함수 끝" << endl;
}

int main() {
    cout << "main함수 시작" << endl;
    testLocalObj();
    cout << "main함수 끝" << endl;
}