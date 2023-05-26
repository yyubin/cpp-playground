//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"

// 전역 변수
int itemCnt = 0;
int money = 100;
int result;

int buyItem(int cost, int cnt) {
    if (money < cost * cnt) return -1;

    itemCnt += cnt;
    money -= cost * cnt;
    printf("아이템 구매 완료.\n");
    printf("  아이템 개수: %d\n", itemCnt);
    printf("  잔액: %d\n", money);
    return 0;
}

int main() {
    // 아이템 구매
    result = buyItem(5000, 1);
    if (result == -1) {
        printf("잔액 부족\n");
    }

    buyItem(10, 7);
}