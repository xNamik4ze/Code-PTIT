/*
Viết chương trình liệt kê các số nguyên tố nhỏ hơn N với N là một số nguyên dương không quá 10^6.
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
    for (int i = 0; i < t; i++) {
        if (isPrime(i)) printf("%d\n", i);
    }
    return 0;
}