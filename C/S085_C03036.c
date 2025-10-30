#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(long long n) {
    long long origin = n, reversed = 0;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    if (origin == reversed) return true;
    return false;
}

bool isOdd(long long n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) return false;
        sum += digit;
        n /= 10;
    }
    if (sum % 2 == 0) return false;
    return true;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        long long n;
        scanf("%lld", &n);
        if (isOdd(n) && isPalindrome(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}