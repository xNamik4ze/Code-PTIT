/*
Viết chương trình nhập vào N (không quá 100) là độ dài cạnh hình bình hành. Thực hiện in ra hình bình hành tương ứng theo mẫu trong ví dụ.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) printf("~");
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}