/*
Số hoàn hảo là số có tổng các ước số (nhỏ hơn chính nó) bằng nó. Ví dụ: 6 = 1 + 2 + 3.
Nhập vào số N và kiểm tra xem n có phải là số hoàn hảo hay không. Nếu đúng in ra 1, sai in ra 0.
*/

#include <stdio.h>

int main() {
    int n, sum = 1;
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d", 0);
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += n / i;
        }
    }
    if (sum == n) printf("%d", 1);
    else printf("%d", 0);
    return 0;
}