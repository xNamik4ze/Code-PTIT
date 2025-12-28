/*
Cho số nguyên dương N không quá 18 chữ số. 
Nếu số chữ số của N là chẵn thì ta có thể tách thành hai nửa trái và phải có số chữ số bằng nhau.
Hãy tính bội số chung nhỏ nhất của hai nửa trái và phải của số N.
*/

#include <stdio.h>
#include <stdbool.h>

long long lcmFind(int a, int b) {
    long long A = a, B = b;
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
            printf("%lld\n", lcmFind(left, right));
        }
    }
    return 0;
}