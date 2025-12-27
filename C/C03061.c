/*
Một số được coi là đẹp nếu chữ số đầu gấp đôi chữ số cuối hoặc ngược lại; đồng thời các chữ số  từ vị trí thứ 2 đến gần cuối thỏa mãn là một số thuận nghịch.
Ví dụ: các số 36788766; 12345654322 là các số đẹp.
Viết chương trình kiểm tra số đẹp theo tiêu chí trên.
*/

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