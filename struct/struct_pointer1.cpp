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

    ProductInfo *ptr_product = &myProduct;

    printf("상품 번호 : %d\n", (*ptr_product).num);
    printf("상품 이름 : %s\n", (*ptr_product).name);
    printf("상품 가격 : %d\n", (*ptr_product).cost);

    // (*ptr_product). == ptr_product->
    printf("상품 번호 : %d\n", ptr_product->num);
    printf("상품 이름 : %s\n", ptr_product->name);
    printf("상품 가격 : %d\n", ptr_product->cost);
}
