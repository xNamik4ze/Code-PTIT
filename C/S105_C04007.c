#include <stdio.h>

int main() {
    int n, m, p;
    scanf("%d %d", &n, &m);
    int A[203], B[103];
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);
    for (int i = 0; i < m; i++) scanf("%d", &B[i]);
    scanf("%d", &p);

    for (int i = n - 1; i >= n - m; i--) {
        A[i + m] = A[i];
    }

    for (int i = 0; i < m; i++) {
        A[i + p] = B[i];
    }

    for (int i = 0; i < n + p; i++) {
        printf("%d", A[i]);
        if (i < n + p - 1) printf(" ");
    }    
    return 0;
}