//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"

int useCnt[5] = {0};

void useItem(int);

int main() {
    useItem(4);
    useItem(2);
    useItem(1);
    useItem(4);
    useItem(0);

    for (int i = 0; i < 5; ++i) {
        printf("슬롯%d의 아이템을 %d번 사용했습니다.\n", i, useCnt[i]);
    }
}

void useItem(int itemNum) {
    useCnt[itemNum]++;
}