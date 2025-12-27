/*
Một số Smith là một số tự nhiên thỏa mãn tổng các chữ số của nó bằng với tổng các chữ số của các thừa số nguyên tố của nó.
Nhiệm vụ của bạn là hãy xác định xem số nguyên N đã cho có là số Smith hay không?
*/

#include <stdio.h>

int sumDigit(int n) {
    int sum = 0;
    while (n > 0) {
        int temp = n % 10;
        sum += temp;
        n /= 10;
    }
    return sum;
}

int sumFactor(int n) {
    int sum = 0;
    while (n % 2 == 0) {
        sum += 2;
        n /= 2;
    }
    
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            sum += sumDigit(i);
            n /= i;
        }
    }

    if (n > 1) sum += sumDigit(n);
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    int factor = sumFactor(n), digit = sumDigit(n);
    if (factor == digit) printf("YES\n");
    else printf("NO\n");
    return 0;
}