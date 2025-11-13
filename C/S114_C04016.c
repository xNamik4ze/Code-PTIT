#include <stdio.h>
#include <stdbool.h>

#define MAX 10000

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
    for (int j = 1; j <= t; j++) {
        int n;
        scanf("%d", &n);
        int arr[103];
        int freq[MAX + 3] = {0};
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            freq[arr[i]]++;
        }

        printf("Test %d:\n", j);
        for (int i = 2; i < MAX + 3; i++) {
            if (freq[i] > 0 && isPrime(i)) {
                printf("%d xuat hien %d lan", i, freq[i]);
                printf("\n");
            }
        }
    }
    return 0;
}