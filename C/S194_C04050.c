#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[103], b[103];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);
    
    bool A[1001] = {false}, B[1001] = {false};
    for (int i = 0; i < n; i++) A[a[i]] = true;
    for (int i = 0; i < m; i++) B[b[i]] = true;

    for (int i = 1; i < 1001; i++) if (A[i] && B[i]) printf("%d ", i);
    printf("\n");

    for (int i = 1; i < 1001; i++) if (A[i] && !B[i]) printf("%d ", i);
    printf("\n");

    for (int i = 1; i < 1001; i++) if (!A[i] && B[i]) printf("%d ", i);
    return 0;
}