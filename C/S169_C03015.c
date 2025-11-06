#include <stdio.h>

int maxPrimeDivisor(long long n) {
    int max = 1;
    while (n % 2 == 0) {
        n /= 2;
        max = 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            n /= i;
            max = i;
        }
    }

    if (n > 1) max = n;
    return max;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        long long n;
        scanf("%lld", &n);
        printf("%d\n", maxPrimeDivisor(n));
    }
    return 0;
}