#include <stdio.h>
#include <stdbool.h>

long long factorial(int n) {
    long long product = 1;
    for (int i = 1; i <= n; i++) {
        product *= i;
    }
    return product;
}

int main() {
    int n;
    scanf("%d", &n);
    int origin = n;
    long long total = 0;
    while (n > 0) {
        int temp = n % 10;
        total += factorial(temp);
        n /= 10;
    }
    if (total == origin) printf("%d", 1);
    else printf("%d", 0);
    return 0;
}