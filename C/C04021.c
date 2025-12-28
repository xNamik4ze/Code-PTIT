/*
Viết chương trình nhập vào mảng A gồm n phần tử (1 < n < 100). Thực hiện dịch n phần tử của mảng sang phải và In ra mảng kết quả
*/

#include <stdio.h>

int main() {
    int n, m;
    int a[203];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &m);

    for (int i = 0; i < n - m; i++) {
        a[n + i] = a[i];
    }

    for (int i = 0; i < n; i++) {
        a[i] = a[i + n - m];
    }

    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) printf(" ");
    }
    return 0;
}