/*
Viết chương trình C cho phép nhập vào hai số a và b (không quá 6 chữ số, a có thể lớn hơn b). Thực hiện liệt kê các số hoàn hảo nằm trong đoạn từ [a,b].
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
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i < b; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
