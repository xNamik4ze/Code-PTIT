/*
Cho số nguyên dương N không quá 9 chữ số.
Hãy đếm xem N có bao nhiêu chữ số.
*/

#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    while (n > 0) {
        n /= 10;
        count ++;
    }
    printf("%d", count);
    return 0;
}