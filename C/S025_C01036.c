/*
Cho một số nguyên dương N.
Thực hiện tìm tích của các chữ số và in ra màn hình.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long res = 1;
    while (n > 0) {
        int temp = n % 10;
        res *= temp;
        n /= 10;
    }
    printf("%lld", res);
    return 0;
}