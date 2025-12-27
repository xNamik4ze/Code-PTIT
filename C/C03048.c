/*
Một số được gọi là số ưu thế chẵn nếu nó là số chẵn và số chữ số chẵn nhiều hơn số chữ số lẻ. 
Hãy viết chương trình kiểm tra một số có phải ưu thế chẵn hay không.
*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        long long n;
        scanf("%lld", &n);
        if (n % 2 == 1) {
            printf("NO\n");
            continue;
        }

        int odd = 0, even = 0;
        while (n > 0) {
            int temp = n % 10;
            if (temp % 2 == 1) odd ++;
            else even++;
            n /= 10;
        }

        if (odd < even) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}