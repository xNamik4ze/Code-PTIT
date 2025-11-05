#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int j = 1; j <= t; j++) {
        int n, m, p;
        scanf("%d %d %d", &n, &m, &p);
        int A[203], B[103];
        for (int i = 0; i < n; i++) scanf("%d", &A[i]);
        for (int i = 0; i < m; i++) scanf("%d", &B[i]);

        for (int i = n - 1; i >= p; i--) {
            A[i + m] = A[i];
        }

        for (int i = 0; i < m; i++) {
            A[i + p] = B[i];
        }

        printf("Test %d:\n", j);
        for (int i = 0; i < n + m; i++) {
            printf("%d", A[i]);
            if (i < n + m - 1) printf(" ");
        }
        printf("\n");
    }       
    return 0;
}
