#include <stdio.h>

int main() {
    int n, m;
    int a[103];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        a[n + i] = a[i];
    }

    for (int i = 0; i < n; i++) {
        a[i] = a[i + m];
    }

    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) printf(" ");
    }
    return 0;
}