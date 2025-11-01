#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(long long n) {
    long long original = n, temp = 0;
    while (n > 0) {
        temp = temp * 10 + n % 10;
        n /= 10;
    }
    return temp == original;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        long long n;
        scanf("%lld", &n);
        if (isPalindrome(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}