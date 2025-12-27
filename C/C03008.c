/*
Số hoàn hảo là số có tổng các ước số (nhỏ hơn chính nó) bằng nó. Ví dụ: 6 = 1 + 2 + 3.
Viết chương trình cho phép nhập vào số n (không quá 6 chữ số) và liệt kê các số hoàn hảo nhỏ hơn n.
*/

#include <stdio.h>
#include <stdbool.h>

bool isPerfect(int x) {
    if (x <= 1) return false;
    int sum = 1;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            sum += i;
            if (i != x / i) sum += x / i;
        }
    }
    return sum == x;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i < n; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
