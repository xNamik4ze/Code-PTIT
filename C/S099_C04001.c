/*
Viết chương trình in ra các số chẵn trong một dãy số cho trước.
*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        int n;
        scanf("%d", &n);
        int arr[103];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}