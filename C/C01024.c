/*
Viết chương trình kiểm tra một số nguyên dương bất kỳ (2 chữ số trở lên, không quá 9 chữ số) có chữ số bắt đầu và kết thúc bằng nhau hay không.
*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        int n;
        scanf("%d", &n);
        
        int first = n % 10;
        while (n > 9) n /= 10;
        
        if (first == n) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}