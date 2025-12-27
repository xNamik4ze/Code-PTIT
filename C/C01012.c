/*
Cho luồng dữ liệu văn bản chỉ bao gồm các số nguyên dương không quá 18 chữ số. 
Hãy tìm và in ra giá trị số lớn nhất.
Chú ý: bạn cần đọc đến hết luồng dữ liệu vào.
*/

#include <stdio.h>

int main() {
    long long n;
    long long max = 0;
    while (scanf("%lld", &n) == 1) {
        if (n > max) max = n;
    }
    printf("%lld", max);
    return 0;
}