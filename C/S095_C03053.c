/*
Cho số nguyên dương chẵn N>2. Hãy liệt kê các cặp số nguyên tố p, q có tổng đúng bằng N. Ví dụ N = 6 ta có 1 cặp số nguyên tố là 3 + 3 =6.
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
        int temp = 2;
        if (isPrime(n - 2)) printf("%d %d ", temp, n - 2);
        for (int i = 3; i <= n / 2; i += 2) {
            if (isPrime(i)) {
                if (isPrime(n - i)) printf("%d %d ", i, n - i);
            }
        }
        printf("\n");
    }
    return 0;
}