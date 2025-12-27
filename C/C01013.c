/*
Cho luồng dữ liệu vào gồm tối đa 10 triệu số nguyên dương, các số đều không quá 8 chữ số. Hãy in ra số lớn nhất và số nhỏ nhất
*/

#include <stdio.h>

int main() {
    int n, max = 0, min = 99999999;
    while (scanf("%d", &n) == 1) {
        if (n > max) max = n;
        if (n < min) min = n;
    }
    printf("%d %d", max, min);
    return 0;
}