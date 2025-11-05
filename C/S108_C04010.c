#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int A[103], min1 = INT_MAX, min2 = INT_MAX;
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        if (A[i] < min2) {
            min2 = A[i];
            if (A[i] < min1) {
                min2 = min1;
                min1 = A[i];
            }
        }
    }
    printf("%d %d", min1, min2);
    return 0;
} 