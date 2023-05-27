//
// Created by 박유빈 on 2023/05/28.
//

#include "iostream"
using namespace std;

int n;
void set() {
    n = 10;
}

namespace yubin {
    void set();
    namespace google {
        void set();
        int n;
    }
    int n;
}

int main() {
    ::set();
    yubin::set();
    yubin::google::set();

    cout << ::n << endl;
    cout << yubin::n << endl;
    cout << yubin::google::n << endl;
}

void yubin::set() {
    n = 20;
}

void yubin::google::set() {
    n = 30;
}