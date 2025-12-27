/*
Tìm bội số chung nhỏ nhất và ước số chung lớn nhất của hai số nguyên dương a, b.
*/

#include <stdio.h>

long long gcdFind(long long a, long long b) {
    if (b == 0) return a;
    return gcdFind(b, a % b);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        long long gcd = gcdFind(a, b);
        long long lcm = a * b / gcd;
        printf("%lld %lld\n", lcm, gcd);
    }
    return 0;
}