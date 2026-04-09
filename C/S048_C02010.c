#include <stdio.h>

int main() {
    int hei, wid;
    scanf("%d %d", &hei, &wid);
    for (int i = 1; i <= hei; i++) {
        for (int j = 1; j <= wid; j++) printf("%d", j);
    }
}