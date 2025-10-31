#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int n) {
    int origin = n, reversed = 0;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return origin == reversed;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (!isPalindrome(a) && isPalindrome(b) || isPalindrome(a) && !isPalindrome(b)) printf("YES");
    else printf("NO");
    return 0;
}