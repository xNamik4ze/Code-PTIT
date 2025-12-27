/*
Viết chương trình nhập vào chiều cao của tam giác (không quá 100) và In ra tam giác hình sao tương ứng theo mẫu trong ví dụ.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 1 + i; j++) printf("*");
        printf("\n");
    }
    return 0;
}