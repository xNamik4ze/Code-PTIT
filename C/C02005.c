/*
Viết chương trình nhập vào số hàng và cột của hình bình hành (không quá 100). Thực hiện in ra hình bình hành ngược theo mẫu trong ví dụ.
*/

#include <stdio.h>

int main() {
    int height, width;
    scanf("%d %d", &height, &width);
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < i; j++) printf("~");
        for (int j = 0; j < width; j++) printf("*");
        printf("\n");
    }
    return 0;
}