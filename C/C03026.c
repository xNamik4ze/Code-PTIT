/*
Cho hai số nguyên dương a và b không quá 10^6.
Hãy kiểm tra tính chất thuận nghịch của a và b. 
Biết rằng một số được coi là thuận nghịch nếu viết ngược lại vẫn được giá trị như ban đầu (ví dụ: 8, 34543, 11233211).
Nếu một trong hai số là thuận nghịch, số còn lại không phải thuận nghịch thì in ra YES, ngược lại in ra NO.
*/

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int n) {
    int origin = n, reversed = 0;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return origin == reversed;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (!isPalindrome(a) && isPalindrome(b) || isPalindrome(a) && !isPalindrome(b)) printf("YES");
    else printf("NO");
    return 0;
}