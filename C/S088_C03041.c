#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (c - a == d - b) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}