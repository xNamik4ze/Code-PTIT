/*
Cho số nguyên dương N.
Nhiệm vụ của bạn là hãy xác định xem có bao nhiêu ước của N chia hết cho 2?
*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        int n;
        scanf("%d", &n);
        printf("%d = ", n);
        
        int count = 0;
        while (n % 2 == 0) {
            count++;
            n /= 2;
        }
        if (count > 0) {
            printf("%d^%d", 2, count);
            if (n > 1) printf(" * ");
        }

        for (int i = 3; i * i <= n; i += 2) {
            count = 0;
            while (n % i == 0) {
                count++;
                n /= i;
            }
            if (count > 0) {
                printf("%d^%d", i, count);
                if (n > 1) printf(" * ");
            }
        }

        if (n > 1) printf("%d^%d", n, 1);
        printf("\n");
    }
    return 0;
}