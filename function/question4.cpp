//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"

void printNoSpace(char string[]) {
    for (int i=0; string[i] != '\0'; i++) {
        if (string[i] != ' ') {
            printf("%c", string[i]);
        }
    }
}

int main() {
    printNoSpace("Hello, World\n");
    printNoSpace("My name is yubin!\n");
}
