#include <stdio.h>

int main() {
    char n[19];
    scanf("%s", n);
    int count[10] = {0};
    int seen[10] = {0};

    for (int i = 0; n[i]; i++) {
        int digit = n[i] - '0';
        count[digit]++;
    }

    for (int i = 0; n[i]; i++) {
        int digit = n[i] - '0';
        if (!seen[digit]) {
            seen[digit] = 1;
            if (digit == 2 || digit == 3 || digit == 5 || digit == 7) printf("%d %d\n", digit, count[digit]);
        }
    }
    return 0;
}