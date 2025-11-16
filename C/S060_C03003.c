/*
Viết chương trình liệt kê N số nguyên tố đầu tiên với N là một số nguyên dương không quá 10^5.
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
    int n;
    scanf("%d", &n);
    int count = 0, num = 2;
    while (count < n) {
        if (isPrime(num)) {
            printf("%d\n", num);
            count++;
        }
        num++;
    }
    return 0;
}