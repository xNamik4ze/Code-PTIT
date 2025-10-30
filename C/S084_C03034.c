#include <stdio.h>

int countOddDivisors(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i += 2) {
        if (n % i == 0) {
            count ++;
            if (n / i != i) count++;
        }
    }
    return count;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        int n;
        scanf("%d", &n);
        if (n % 2 == 1) printf("%d\n", 0);
        else {
            int temp = 0;
            while (n % 2 == 0) {
                temp++;
                n /= 2;
            }
            int divisor = countOddDivisors(n);
            printf("%d\n", divisor * temp);
        }
    }
    return 0;
}