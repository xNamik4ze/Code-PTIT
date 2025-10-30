/*
Viết chương trình nhập vào một số nguyên dương N không quá 9 chữ số.
In ra chữ số đầu tiên và cuối cùng của N.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int last;
    last = n % 10;
    while (n > 9) n /= 10;
    printf("%d %d", n, last);
    return 0;
}