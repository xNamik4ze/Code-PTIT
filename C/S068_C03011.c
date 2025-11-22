/*
Viết chương trình C cho phép nhập vào hai số a và b (a có thể lớn hơn b). 
Liệt kê các sô Strong nằm trong đoạn a,b.
Các kết quả thỏa mãn liệt kê cách nhau một khoảng trống.
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
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
