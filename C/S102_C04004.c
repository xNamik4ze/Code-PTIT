#include <stdio.h>

long long fib(int n) {
    if (n == 1 || n == 2) return 1;
    long long f1 = 1, f2 = 1;
    for (int i = 3; i <= n; i++) {
        f2 += f1;
        f1 = f2 - f1;
    }
    return f2;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        int n;
        scanf("%d", &n);
        printf("%lld\n", fib(n));
    }
    return 0;
}