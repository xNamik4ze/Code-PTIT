#include <stdio.h>

int main() {
    int n;
    int a[100], unique[100];
    int count = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        int freq = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == a[i]) freq++;
        }
        if (freq == 1) {
            unique[count++] = a[i];
        }
    }

    printf("%d\n", count);
    for (int i = 0; i < count; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
