//
// Created by 박유빈 on 2023/05/28.
//

#include "cstdio"

#define FOR(I,S,E) for (int I=S; I<=E; I++)
#define LOOP while (true)

int main() {
    FOR(i, 1, 10) {
        printf("%d ", i);
    }

    LOOP {
        printf("*");
        break;
    };
}