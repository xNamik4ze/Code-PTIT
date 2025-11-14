/*
Viết chương trình tính tổng S = 1 + 1.2 + 1.2.3 +   ...+1.2.3...n.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long sum = 0, product = 1;
    for (int i = 1; i <= n; i++) {
        product *= i;
        sum += product;
    }
    printf("%lld", sum);
    return 0;
}