//
// Created by 박유빈 on 2023/05/27.
//

#include "cstdio"
struct ProductInfo {
    int num; // 4b
    char name[100]; // 100b
    int cost; // 4b
};

void productSwap(ProductInfo *a, ProductInfo *b) {
    ProductInfo tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    ProductInfo myProduct = {4797, "한라봉", 19900};
    ProductInfo otherProduct = {4798, "사과", 20000};

    productSwap(&myProduct, &otherProduct);
    printf("상품 번호 : %d\n", myProduct.num);
    printf("상품 이름 : %s\n", myProduct.name);
    printf("상품 가격 : %d\n", myProduct.cost);

}
