/*
Nhập 2 số nguyên dương a,b không quá 1000.
Hãy in ra lần lượt các giá trị: tổng, hiệu, tích, chia kết quả thực (với đúng 2 chữ số sau dấu phẩy) và chia phần dư của 2 số a,b đã cho.
Kết quả tính toán ghi trên một dòng. Nếu b = 0 thì không thực hiện phép toán nào mà chỉ in ra số 0.
*/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (b == 0) printf("%d", 0);
    else printf("%d %d %d %.2f %d", a + b, a - b, a * b, (double)a / b, a % b);
    return 0;
}