/*
Số Strong là số thỏa mãn có tổng giai thừa các chữ số của nó bằng chính nó. Ví dụ: 145 = 1! + 4! + 5!
Viết chương trình nhập vào số n không quá 6 chữ số và kiểm tra xem n có phải số Strong hay không. Nếu đúng in ra 1 sai in ra 0.
*/

#include <stdio.h>
#include <stdbool.h>

long long factorial(int n) {
    long long product = 1;
    for (int i = 1; i <= n; i++) {
        product *= i;
    }
    return product;
}

int main() {
    int n;
    scanf("%d", &n);
    int origin = n;
    long long total = 0;
    while (n > 0) {
        int temp = n % 10;
        total += factorial(temp);
        n /= 10;
    }
    if (total == origin) printf("%d", 1);
    else printf("%d", 0);
    return 0;
}