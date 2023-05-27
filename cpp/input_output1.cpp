//
// Created by 박유빈 on 2023/05/28.
//

#include "iostream"
using namespace std;

namespace a
{
    int n;
}

namespace b
{
    int n;
}

int main() {
    a::n = 10;
    b::n = 20;

    // namespace
    // << 시프트연산
    cout << "Hello, World!\n" << 10 << "\nc" << endl;

    int a, b;
    cin >> a >> b;

    cout << a << "+" << b << "=" << a+b << endl;
}
