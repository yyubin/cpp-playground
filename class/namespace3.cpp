//
// Created by 박유빈 on 2023/05/28.
//

#include "iostream"

int n;
void set() {
    n = 10;
}

namespace yubin {
    int n;
    void set() {
        n = 20;
    }

    namespace google {
        int n;
        void set() {
            n = 30;
        }
    }
}

int main() {
    using namespace std;
    using namespace yubin;

    ::set();
    yubin::set();
    google::set();

    cout << ::n << endl;
    cout << yubin::n << endl;
    cout << google::n << endl;
}


