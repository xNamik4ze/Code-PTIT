/*
Nhập vào kích thước chiều rộng, chiều cao và in ra hình chữ nhật các dấu * nhưng rỗng bên trong. Các dấu * được in sát cạnh nhau.
Dữ liệu vào chỉ có 2 số nguyên dương là chiều rộng và chiều cao (không quá 40).
*/

#include <stdio.h>

int main() {
    int width, height;
    scanf("%d %d", &width, &height);
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}