/*
Cho dãy số A[] có N phần tử đều là các số nguyên dương và không quá 1000.
Hãy liệt kê các số nguyên tố khác nhau trong dãy theo thứ tự tăng dần.
*/

#include <stdio.h>
#include <stdbool.h>

bool prime[1001];
bool seen[1001];

void sieve() {
    for (int i = 2; i <= 1003; i++) prime[i] = true;
    prime[0] = prime[1] = false;
    for (int i =2; i * i <= 1003; i++) {
        if (prime[i]) for (int j = i * i; j <= 1003; j += i) prime[j] = false;
    }
}
int main() {
    sieve();
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < 1003; i++) seen[i] = false;
        for (int i = 0; i < n; i++) {
            int temp;
            scanf("%d", &temp);
            seen[temp] = true;
        }

        for (int i = 0; i < 1003; i++) {
            if (prime[i] && seen[i]) printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}