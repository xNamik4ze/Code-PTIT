/*
Cho số nguyên dương N không quá 9 chữ số. Hãy in ra giá trị thập phân 1/N.
*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%.15f\n", 1.0 / n);
    }
    return 0;
}