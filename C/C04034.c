/*
Cho dãy số A[] gồm có N phần tử. Một phần tử được gọi là số đứng đầu nếu như nó lớn hơn tất cả các phần tử nằm bên phải của nó.
Nhiệm vụ của bạn là hãy tìm các số đứng đầu trong dãy số A[] đã cho.
*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int a[1003], res[1003];
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);

        int max = 0, count = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] > max) {
                res[count++] = a[i];
                max = a[i];
            }
        }

        for (int i = count - 1; i >= 0; i--) {
            printf("%d", res[i]);
            if (i > 0) printf(" ");
        }
        printf("\n");
    }
    return 0;
}