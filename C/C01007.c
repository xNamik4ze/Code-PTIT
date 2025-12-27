/*
Nhập 2 số nguyên dương a,b không quá 6 chữ số.
Hãy in ra lần lượt các giá trị: tổng, hiệu, tích, chia phần nguyên, chia phần dư, chia kết quả thực (với đúng 2 chữ số sau dấu phẩy) của 2 số a,b đã cho.
Mỗi kết quả tính toán ghi trên một dòng
*/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    long long product = (long long)a * b;
    printf("%d\n%d\n%lld\n", a + b, a - b, product);
    printf("%d\n%d\n%.2f", a / b, a % b, (double)a / b);
    return 0;
}