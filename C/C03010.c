/*
Số Strong là số thỏa mãn có tổng giai thừa các chữ số của nó bằng chính nó. Ví dụ: 145 = 1! + 4! + 5!
Viết chương trình nhập vào số n không quá 9 chữ số và liệt kê các số Strong nhỏ hơn n (Các kết quả thỏa mãn được liệt kê trên một dòng cách nhau một khoảng trống)
*/

#include <stdio.h>

long long factorial(int n) {
    long long product = 1;
    for (int i = 1; i <= n; i++) {
        product *= i;
    }
    return product;
}

int isStrong(int x) {
    int temp = x;
    long long sum = 0;
    while (temp > 0) {
        int d = temp % 10;
        sum += factorial(d);
        temp /= 10;
    }
    return sum == x;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
