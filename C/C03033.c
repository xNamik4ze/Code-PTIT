/*
Hãy phân tích một số nguyên dương thành tích các thừa số nguyên tố.   
*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d = ", n);
        
        int count = 0;
        while (n % 2 == 0) {
            n /= 2;
            count++;
        }
        if (count > 0) {
            printf("%d^%d", 2, count);
            if (n > 1) printf(" * ");
        }

        for (int i = 3; i * i <= n; i += 2) {
            count = 0;
            while (n % i == 0) {
                n /= i;
                count++;
            }
            if (count > 0) {
                printf("%d^%d", i, count);
                if (n > 1) printf(" * ");
            }
        }

        if (n > 1) printf("%d^1", n);
        printf("\n");
    }
    return 0;
}