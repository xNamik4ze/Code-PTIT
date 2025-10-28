/*
Nhập một số nguyên dương không quá 9 chữ số. Hãy kiểm tra xem đó có phải số chính phương hay không.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        int n;
        scanf("%d", &n);
        int x = sqrt(n);
        if (x * x == n) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}