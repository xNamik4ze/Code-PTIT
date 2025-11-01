#include <stdio.h>

int main() {
    int n, sum = 1;
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d", 0);
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += n / i;
        }
    }
    if (sum == n) printf("%d", 1);
    else printf("%d", 0);
    return 0;
}