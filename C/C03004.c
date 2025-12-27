/*
Viết chương trình tìm ước số chung lớn nhất và bội số chung nhỏ nhất của hai số nguyên dương a,b.
*/

#include <stdio.h>

int gcdFind(int a, int b) {
    if (b == 0) return a;
    return gcdFind(b, a % b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int gcd = gcdFind(a, b);
    long long lcm = (long long)a * b / gcd;
    printf("%d\n%lld", gcd, lcm);
    return 0;
}