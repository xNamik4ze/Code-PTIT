/*
Cho số tự nhiên N không quá 9 chữ số. Hãy in ra giá trị bình phương của N.
*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t-- > 0) {
        long long n;
        scanf("%lld", &n);
        printf("%lld\n", n * n);
    }
    return 0;
}