/*
Viết chương trình in ra các số nguyên tố trong một dãy số cho trước.
*/

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

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
            if (isPrime(arr[i])) printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}