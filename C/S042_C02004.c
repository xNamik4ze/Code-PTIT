/*
Viết chương trình nhập vào n (không quá 100) là độ dài cạnh hình bình hành. Thực hiện in ra hình bình hành rỗng tương ứng theo mẫu trong ví dụ.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) printf("~");
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) printf("*");
            else printf(".");
        }
        printf("\n");
    }
    return 0;
}