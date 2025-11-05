#include <stdio.h>
#include <stdbool.h>

int lcmFind(int a, int b) {
    int A = a, B = b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return A * B / a;
}

int nums(long long n) {
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

void splitNumber(long long n, int *left, int *right, int digits) {
    int temp = 1;
    for (int i = 0; i < digits / 2; i++) temp *= 10;
    *right = n % temp;
    *left = n / temp;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        long long n;
        scanf("%lld", &n);
        int digits = nums(n);
        if (digits % 2 != 0) {
            printf("INVALID\n");
        } else {
            int left, right;
            splitNumber(n, &left, &right, digits);
            printf("%d\n", lcmFind(left, right));
        }
    }
    return 0;
}