#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, pos = 0;
    scanf("%d", &n);
    int a[103], seen[103];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        bool existed = false;
        for (int j = 0; j < pos; j++) {
            if (a[i] == seen[j]) {
                existed = true;
                break;
            }
        }
        if (!existed) {
            seen[pos++] = a[i];
            int count = 0;
            for (int k = i; k < n; k++) {
                if (a[i] == a[k]) count++;
            }
            printf("%d %d\n", a[i], count);
        }
    }
    return 0;
}