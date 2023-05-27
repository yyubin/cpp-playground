//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"
struct ProductInfo {
    int num; // 4b
    char name[100]; // 100b
    int cost; // 4b
};

int main() {
    ProductInfo myProduct = {4797, "한라봉", 19900};
    printf("상품 번호 : %d\n", &myProduct.num);
    printf("상품 이름 : %d\n", myProduct.name);
    printf("상품 가격 : %d\n", &myProduct.cost);
    // 메모리 상에 나란히 저장

    printf("%d\n", &myProduct);
    printf("%d\n", myProduct);
    printf("sizeof(myProduct) = %d\n", sizeof(myProduct));
}
