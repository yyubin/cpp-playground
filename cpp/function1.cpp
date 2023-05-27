//
// Created by 박유빈 on 2023/05/28.
//

#include "iostream"

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void swap(double &a, double &b) {
    double tmp = a;
    a = b;
    b = tmp;
}

void swap(int*(&a), int*(&b)) {
    int *tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a = 20, b = 30;
    swap(a, b);

    double da = 2.222, db = 3.333;
    swap(da, db);

    int *pa = &a, *pb = &b;
    swap(pa, pb);

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << da << std::endl;
    std::cout << db << std::endl;

    std::cout << *pa << std::endl;
    std::cout << *pb << std::endl;

}