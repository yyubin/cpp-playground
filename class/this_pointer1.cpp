//
// Created by 박유빈 on 2023/05/28.
//

#include "iostream"
using namespace std;

// 클래스는 객체 안에 존재하지 않고
// 실제 메모리에서는 다른 곳에 하나만 존재함 (두개를 선언하였더라도)
class MyClass {
public:
    // 클래스나 struct 안에 있는 모든 멤버 함수들은 this 포인터를 보이지 않는 매개변수의 형태로 받아둔다.
    //
    void printThis() {
        cout << "나의 주소는 " << this << endl;
    }
};

int main() {
    MyClass a, b;

    cout << "a의 주소는 " << &a << endl;
    cout << "b의 주소는 " << &b << endl;

    a.printThis();
    b.printThis();

}