#include <stdio.h>

long long max(long long n) {
    long long origin = n, rank = 1;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 5) origin += rank;
        n /= 10;
        rank *= 10;
    }
    return origin;
}

long long min(long long n) {
    long long origin = n, rank = 1;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 6) origin -= rank;
        n /= 10;
        rank *= 10;
    }
    return origin;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        long long x1, x2;
        scanf("%lld %lld", &x1, &x2);
        printf("%lld %lld\n", min(x1) + min(x2), max(x1) + max(x2));
    }
    return 0;
}
