/*
Viết chương trình đếm xem trong đoạn [a,b] có bao nhiêu số là số nguyên tố và tất cả các chữ số của nó cũng là số nguyên tố.
*/

#include <stdio.h>
#include <stdbool.h>

#define MAX 1000000

bool isPrimes[MAX + 1];
int validPrimes[MAX];
int validPrimesCount = 0;

bool digitPrime[10] = {false, false, true, true, false, true, false, true, false, false};

void sieve() {
    for (int i = 2; i <= MAX; i++) isPrimes[i] =true;
    for (int i = 2; i * i <= MAX; i++) {
        if (isPrimes[i]) {
            for (int j = i * i; j <= MAX; j+= i) isPrimes[j] = false;
        }
    }

    for (int i = 3; i <= MAX; i += 2) {
        if (isPrimes[i]) {
            int num = i;
            bool valid = true;
            while (num > 0) {
                int digit = num % 10;
                if (!digitPrime[digit]) {
                    valid = false;
                    break;
                }
                num /= 10;
            }
            if (valid) validPrimes[validPrimesCount++] = i;
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    sieve();
    while (t-- > 0) {
        int a, b;
        scanf("%d %d", &a, &b);
        int count = 0;
        for (int i = 0; i < validPrimesCount; i++) {
            int prime = validPrimes[i];
            if (prime > b) break;
            if (prime >= a) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}