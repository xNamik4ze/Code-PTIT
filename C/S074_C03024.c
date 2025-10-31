#include <stdio.h>

int sumDigit(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (sumDigit(a) > sumDigit(b)) printf("%d %d", b, a);
    else printf("%d %d", a, b);
    return 0;
}