/*
Hãy phân tích một số nguyên dương thành tích các thừa số nguyên tố.   
*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        int n, divide = 2;
        scanf("%d", &n);
        printf("Test %d: ", i);
        while (divide * divide <= n) {
            int count = 0;
            while (n % divide == 0) {
                count++;
                n /= divide;
            }
            if (count > 0) printf("%d(%d) ", divide, count);
            divide++;
        }
        if (n > 1) printf("%d(1)", n);
        printf("\n");
    }
    return 0;
}