/*
Nhập một dãy số nguyên có n phần tử (n không quá 100, các phần tử trong dãy không quá 10^9). 
Hãy viết chương trình kiểm tra xem dãy có phải đối xứng hay không. 
Nếu đúng in ra YES, nếu sai in ra NO.
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        int n;
        scanf("%d", &n);
        int arr[103];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int l = 0, r = n - 1;
        bool isPalindrome = true;
        while (l < r) {
            if (arr[l] != arr[r]) {
                isPalindrome = false;
                break;
            }
            l++;
            r--;
        }
        if (isPalindrome) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}