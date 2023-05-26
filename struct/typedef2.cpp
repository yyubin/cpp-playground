//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"

int main() {
    typedef int Pair[2];
    Pair point = {3, 4};
    printf("(%d, %d)\n", point[0], point[1]);

    typedef char *String;
    String name = "yubin"; // char *name = "yubin";
    printf("이름 : %s", name);
}
