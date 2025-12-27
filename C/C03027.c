/*
Cho hai số nguyên dương a và b. Hãy kiểm tra xem ước số chung lớn nhất của hai số này có tổng chữ số là nguyên tố hay không.
Ví dụ a = 42, b = 28, ước số chung lớn nhất = 14. Tổng chữ số của ước số chung là 1+4=5 là một số nguyên tố.
*/

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

int gcdFind(int a, int b) {
    if (b == 0) return a;
    return gcdFind(b, a % b);
}

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
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        int a, b;
        scanf("%d %d", &a, &b);
        int gcd = gcdFind(a, b);
        if (isPrime(sumDigit(gcd))) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}