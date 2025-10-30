/*
Cho hai số nguyên dương a,b không quá 10^6.
Thực hiện tính tổng các số tự nhiên nằm trong đoạn [a, b] và in ra màn hình.
(Lưu ý có thể nhập a lớn hơn b)
*/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    int res = (a + b) * (b - a + 1) / 2;
    printf("%d", res);
    return 0;
}