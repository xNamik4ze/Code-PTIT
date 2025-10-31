#include <stdio.h>

int gcdFind(int a, int b) {
    if (b == 0) return a;
    return gcdFind(b, a % b);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        int a, b;
        scanf("%d %d", &a, &b);
        int gcd = gcdFind(a, b);
        int lcm = a * b / gcd;
        printf("%d %d\n", lcm, gcd);
    }
    return 0;
}