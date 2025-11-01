#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        int n, max = 0, count = 0;
        scanf("%d", &n);
        int arr[103], pos[103];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);

            if (arr[i] > max) {
                max = arr[i];
                count = 0;
                pos[count++] = i;
            } else if (arr[i] == max) pos[count++] = i;
        }
        printf("%d\n", max);
        for (int i = 0; i < count; i++) {
            printf("%d", pos[i]);
            if (i < count - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}