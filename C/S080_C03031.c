/*
Cho hai cặp số (a,b) và (c,d). Hãy tính toán xem ước số chung lớn nhất của hai cặp số này có bằng nhau hay không.
*/

#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (gcd(a, b) == gcd(c, d)) printf("YES\n");
        else printf("NO\n");
    } 
    return 0;
}