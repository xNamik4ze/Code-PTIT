/*
Cho hai số nguyên dương X1, X2. Ta chỉ được phép thay đổi chữ số 5 thành 6 và ngược lại chữ số 6 thành chữ số 5 của các số X1 và X2. 
Hãy đưa ra tổng nhỏ nhất và tổng lớn nhất các số X1 và X2 được tạo ra theo nguyên tắc kể trên.
*/

#include <stdio.h>

long long max(long long n) {
    long long origin = n, rank = 1;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 5) origin += rank;
        n /= 10;
        rank *= 10;
    }
    return origin;
}

long long min(long long n) {
    long long origin = n, rank = 1;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 6) origin -= rank;
        n /= 10;
        rank *= 10;
    }
    return origin;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        long long x1, x2;
        scanf("%lld %lld", &x1, &x2);
        printf("%lld %lld\n", min(x1) + min(x2), max(x1) + max(x2));
    }
    return 0;
}
