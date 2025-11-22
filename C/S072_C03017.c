/*
Một số nguyên dương được gọi là số thuận nghịch nếu viết theo chiều ngược lại vẫn có cùng giá trị với số ban đầu. 
Ví dụ số 121 là số thuận nghịch, số 123 không phải số thuận nghịch.
Viết chương trình kiểm tra số thuận nghịch
*/

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(long long n) {
    long long original = n, temp = 0;
    while (n > 0) {
        temp = temp * 10 + n % 10;
        n /= 10;
    }
    return temp == original;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        long long n;
        scanf("%lld", &n);
        if (isPalindrome(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}