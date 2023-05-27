//
// Created by 박유빈 on 2023/05/28.
//

#include "iostream"
using namespace std;

int n;
void set();

namespace yubin {
    int n;
    void set();
}

namespace google {
    int n;
    void set();
}

int main() {
    ::set();
    yubin::set();
    google::set();

    cout << ::n << endl;
    cout << yubin::n << endl;
    cout << google::n << endl;
};

void set() {
    n = 10;
}

void yubin::set() {
    n = 20;
}

void google::set() {
    n = 30;
}