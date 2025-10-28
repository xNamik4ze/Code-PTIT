
/*
Viết chương trình kiểm tra một số nguyên dương có phải số nguyên tố hay không.
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

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        int n;
        scanf("%d", &n);
        if (isPrime(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}