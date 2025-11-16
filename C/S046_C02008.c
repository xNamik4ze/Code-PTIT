/*
Viết chương trình nhập vào chiều cao của tam giác (không quá 100) và In ra tam giác hình sao rỗng tương ứng theo mẫu trong ví dụ.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 1 + i; j++) {
            if (i == 0 || j == 0 || i == n - 1 || j == i) printf("*");
            else printf(".");
        }
        printf("\n");
    }
    return 0;
}