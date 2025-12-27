/*
Tam giác Pascal là tam giác có công thức tính giá trị một vị trí bất kỳ như sau
(n,k) = n!/k!(n-k)!
Trong đó: n là hàng và k là cột.
Người ta thường tận dụng hàm đệ quy để điền các giá trị cho tam giác Pascal. 
Viết chương trình sử dụng đệ quy nhập vào số nguyên dương n không quá 10 và in ra tam giác Pascal tương ứng (lưu ý mỗi phần tử cách nhau 1 khoảng trắng)
*/

#include <stdio.h>

int pascal(int i, int j) {
    if (j == 1 || j == i) return 1;
    return pascal(i - 1, j - 1) + pascal(i - 1, j);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", pascal(i, j));
            if (j < i) printf(" ");
        }
        printf("\n");
    }
    return 0;
}