#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n, count = 0;
    scanf("%d", &n);
    int a[103], primeA[103];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (isPrime(a[i])) primeA[count++] = a[i];
    }

    printf("%d ", count);
    for (int i = 0; i < count; i++) {
        printf("%d", primeA[i]);
        if (i < count - 1) printf(" ");
    }
    return 0;
}