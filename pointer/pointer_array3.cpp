//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"

int main() {
    char str[] = "Hello";
    printf("%s\n", &str[0]);

    char strings[3][10] = {"Hello", "World", "yubin"};
    char *p_str[3];

    for (int i=0; i<3; i++) {
        p_str[i] = strings[i];
    }

    for (int i=0; i<3; i++) {
        printf("%s\n", p_str[i]);
    }
}