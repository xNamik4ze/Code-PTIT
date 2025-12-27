/*
Viết chương trình nhập vào mảng A một chiều n phần tử (1 < n < 100) và mảng B một chiều m phần tử (1 < m < 100). 
Thực hiện chèn mảng B vào mảng A tại vị trí P và in ra mảng kết quả.
*/

#include <stdio.h>

int main() {
    int n, m, p;
    scanf("%d %d", &n, &m);
    int A[203], B[103];
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);
    for (int i = 0; i < m; i++) scanf("%d", &B[i]);
    scanf("%d", &p);

    for (int i = n - 1; i >= p; i--) {
        A[i + m] = A[i];
    }

    for (int i = 0; i < m; i++) {
        A[i + p] = B[i];
    }

    for (int i = 0; i < n + m; i++) {
        printf("%d", A[i]);
        if (i < n + m - 1) printf(" ");
    }    
    return 0;
}