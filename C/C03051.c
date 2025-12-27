/*
Cho hai số L, R. Nhiệm vụ của bạn là hãy đếm tất cả các số có đúng ba ước số trong khoảng [L, R]. 
Ví dụ L =1, R =10, ta có kết quả là 2 vì chỉ có số 4 và 9 là có đúng 3 ước số.
*/

#include <stdio.h>
#include <stdbool.h>

#define MAX 1000000

bool isPrime[MAX + 1];
int primes[MAX];
int primeCount = 0;

void sieve() {
    for (int i = 2; i <= MAX; i++) isPrime[i] = true;
    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i)
                isPrime[j] = false;
        }
    }
    for (int i = 2; i <= MAX; i++)
        if (isPrime[i]) primes[primeCount++] = i;
}

int main() {
    sieve();
    int t;
    scanf("%d", &t);
    while (t--) {
        long long L, R;
        scanf("%lld %lld", &L, &R);
        int count = 0;
        for (int i = 0; i < primeCount; i++) {
            long long prime = (long long)primes[i] * primes[i];
            if (prime > R) break;
            if (prime >= L) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
