#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, count = 0;
        scanf("%d", &n);

        int cur, pre;
        for (int i = 0; i < n; i++) {
            scanf("%d", &cur);
            if (i > 0 && cur == pre) count++;
            pre = cur;
        }
        printf("%d\n", count);
    }
    return 0;
}
