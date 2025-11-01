/*
Một số nguyên dương được gọi là số không giảm nếu các chữ số từ trái qua phải tạo thành dãy không giảm. 
Ví dụ số số 123 là số không giảm, số 121 không phải.
Viết chương trình kiểm tra một số có phải số không giảm hay không.
*/

#include <stdio.h>
#include <stdbool.h>

bool isvalid(long long n) {
    int temp = n % 10;
    n /= 10;
    while (n > 0) {
        if (n % 10 > temp) return false;
        temp = n % 10;
        n /= 10;
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        long long n;
        scanf("%lld", &n);
        if (isvalid(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}