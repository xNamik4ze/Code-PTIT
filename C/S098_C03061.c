#include <stdio.h>
#include <stdbool.h>

bool isValid(long long n) {
    long long original = n, temp = 0, count = 1;
    int first, last;
    last = n % 10;
    while (n > 9) {
        temp = temp * 10 + n % 10;
        n /= 10;
        count *= 10;
    }
    first = n;
    if (!(first == 2 * last || last == first * 2)) return false;
    original = (original - (first * count) - last) / 10;
    temp = temp - (last * count / 10);
    if (original != temp) return false;
    return true;
}


int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        long long n;
        scanf("%lld", &n);
        if (isValid(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}