/*
Cho số tự nhiên N không quá 9 chữ số. Hãy in ra giá trị gấp đôi của N.
*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        long long n;
        scanf("%lld", &n);
        long long res = n * 2;
        printf("%lld\n", res);
    }
    return 0;
}