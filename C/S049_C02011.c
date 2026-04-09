#include <stdio.h>

int main() {
    int hei, wid;
    scanf("%d %d", &hei, &wid);
    for (int i = 1; i <= hei; i++) {
        for (int j = i; j <= wid; j++) printf("%d", j);
        for (int j = wid - 1; j > wid - i; j--) printf("%d", j);
        printf("\n");
    }
    return 0;
}