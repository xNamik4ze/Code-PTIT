#include <stdio.h>

int gcdFind(int a, int b) {
    if (b == 0) return a;
    return gcdFind(b, a % b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i < b; i++) {
        for (int j = i + 1; j <= b; j++) {
            if (gcdFind(i, j) == 1) printf("(%d,%d)\n", i, j);
        }
    }
    return 0;
}