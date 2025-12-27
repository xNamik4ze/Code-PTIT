/*
Nhập một số nguyên dương N không quá 9 chữ số. 
Hãy đếm xem N có bao nhiêu chữ số lẻ và bao nhiêu chữ số chẵn.
*/

#include <stdio.h>

void countOddEven(int n, int *odd, int *even) {
    *odd = 0;
    *even = 0;
    while (n > 0) {
        if (n % 2 == 0) (*even)++;
        else (*odd)++;
        n /= 10;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        int n;
        scanf("%d", &n);
        int odd, even;
        countOddEven(n, &odd, &even);
        printf("%d %d\n", odd, even);
    }
    return 0;
}