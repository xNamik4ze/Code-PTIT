#include <stdio.h>
#include <stdbool.h>

bool isValid(long long n) {
    if (n % 2 == 1) return false;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 1) return false;
        n /= 10;
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        long long n;
        scanf("%lld", &n);
        if (isValid(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}