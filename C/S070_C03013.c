/*
Nhập vào số nguyên dương n không quá 30.
In ra màn hình n số đầu tiên thuộc dãy Fibonacci (tính từ số 0).
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long first = 0, sec = 1;
    for (int i = 0; i < n; i++) {
        printf("%d", first);
        if (i < n - 1) printf(" ");
        sec = first + sec;
        first = sec - first;
    }
    return 0;
}