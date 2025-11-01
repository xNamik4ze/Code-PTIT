#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        int n;
        scanf("%d", &n);
        
        while (n % 2 == 0) {
            printf("%d ", 2);
            n /= 2;
        }

        for (int i = 3; i * i < n; i += 2) {
            while (n % i == 0) {
                printf("%d", i);
                n /= i;
                if (n > 1) printf(" ");
            }
        }

        if (n > 1) printf("%d", n);
        printf("\n");
    }
    return 0;
}