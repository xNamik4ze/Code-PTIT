/*
Cho một số nguyên dương N không quá 5 chữ số, hãy kiểm tra và in ra số đó chẵn hay lẻ. Nếu chẵn ghi ra chữ CHAN, nếu ngược lại ghi ra chữ LE.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 1) printf("LE");
    else printf("CHAN");
    return 0;
}