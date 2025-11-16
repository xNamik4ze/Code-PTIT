/*
Nhập vào một số n không quá 8 chữ số và kiểm tra số đó có thuộc dãy Fibonacci hay không. Nếu thỏa mãn in ra 1, ngược lại in ra 0.
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPerfectSquare(long long n) {
    if (n < 0) return false;
    long long s = llround(sqrt((double)n));
    return s * s == n;
}

int main() {
    long long n;
    scanf("%lld", &n);
    long long temp = 5 * n * n;
    if (isPerfectSquare(temp + 4) || isPerfectSquare(temp - 4)) printf("1");
    else printf("0");
    return 0;
}
