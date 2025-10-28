/*
Hãy viết chương trình tính tổng các chữ số của một số nguyên bất kỳ.
*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        long long n;
        scanf("%lld", &n);
        int sum = 0;
        while (n > 0) {
            int temp = n % 10;
            sum += temp;
            n /= 10;
        }
        printf("%d\n", sum);
    }
    return 0;
}