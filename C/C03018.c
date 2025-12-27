/*
Một số được coi là đẹp nếu nó là số nguyên tố và tổng chữ số là một số trong dãy Fibonaci. 
Viết chương trình liệt kê trong một đoạn giữa hai số nguyên cho trước có bao nhiêu số đẹp như vậy
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool prime[1001];

void sieve() {
    for (int i = 2; i <= 1001; i++) {
        prime[i] = true;
    }
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < 1001; i++) {
        if (prime[i]) {
            for (int j = i * i; j < 1001; j += i) prime[j] = false;
        }
    }
}

bool isPerfectSquare(long long n) {
    if (n < 0) return false;
    long long s = llround(sqrt((double)n));
    return s * s == n;
}

int sum(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}

int main() {
    sieve();
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
        if (prime[i]) {
            int j = sum(i);
            long long temp = 5 * j * j;
            if (isPerfectSquare(temp + 4) || isPerfectSquare(temp - 4)) printf("%d ", i);
        }
    }
    return 0;
}