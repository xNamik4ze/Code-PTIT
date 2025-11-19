/*
Viết chương trình liệt kê các số vừa nguyên tố, vừa thuận nghịch trong đoạn [a,b] với a,b là các số nguyên dương thỏa mãn 10<a<b<10^6.
*/

#include <stdio.h>
#include <stdbool.h>
#define MAX 1000000

bool prime[MAX + 1];

void sieve() {
    for (int i = 2; i <= MAX; i++)
        prime[i] = true;
    for (int i = 2; i * i <= MAX; i++)
        if (prime[i])
            for (int j = i * i; j <= MAX; j += i)
                prime[j] = false;
}

bool isPalindrome(int n) {
    int r = 0, t = n;
    while (n > 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r == t;
}

int main() {
    int t;
    scanf("%d", &t);
    sieve();

    while (t--) {
        int a, b, cnt = 0;
        scanf("%d %d", &a, &b);

        for (int i = a; i <= b; i++) {
            if (prime[i] && isPalindrome(i)) {
                printf("%d ", i);
                cnt++;
                if (cnt % 10 == 0) printf("\n");
            }
        }

        if (cnt % 10 != 0) printf("\n");
        if (t) printf("\n");
    }

    return 0;
}
