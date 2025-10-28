#include <stdio.h>
#include <stdbool.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        long long n;
        scanf("%lld", &n);
        long long result = 0, rank = 1;
        bool valid = true;
        while (n > 0) {
            int temp = n % 10;
            if (temp == 1) result += 1 * rank;
            else if (temp == 0 || temp == 8 || temp == 9) result += 0;
            else {
                valid = false;
                break;
            }
            n /= 10;
            rank *= 10;
        }
        if (!valid || result == 0) printf("INVALID\n");
        else printf("%lld\n", result);
    }
    return 0;
}