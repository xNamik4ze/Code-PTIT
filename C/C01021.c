/*
Viết chương trình nhập vào một số n không quá 10^9, thực hiện tìm tổng các chữ số của n và in ra màn hình.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    while (n > 0) {
        int temp = n % 10;
        sum += temp;
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}