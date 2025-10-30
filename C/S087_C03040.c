#include <stdio.h>

int sumFactor(int n) {
    int sum = 0;
    while (n % 2 == 0) {
        sum += 2;
        n /= 2;
    }
    
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            sum += i;
            n /= i;
        }
    }

    if (n > 1) sum += n;
    return sum;
}

int sumDigit(int n) {
    int sum = 0;
    while (n > 0) {
        int temp = n % 10;
        sum += temp;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    int factor = sumFactor(n), digit = sumDigit(n);
    if (factor == digit) printf("YES\n");
    else printf("NO\n");
    return 0;
}