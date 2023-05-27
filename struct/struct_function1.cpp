//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"

struct Time {
    int h, m, s;

    int totalSec() {
        return 3600 * h + 60 * m + s;
    }
};



int main() {
    Time t = { 1, 22, 48 };
    printf("%d\n", t.totalSec());
}