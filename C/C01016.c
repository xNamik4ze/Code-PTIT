/*
Cho số nguyên dương N (không quá 9). In ra lần lượt kết quả phép nhân của N với các số từ 1 đến 10, mỗi giá trị cách nhau một khoảng trống 
*/

#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++) {
        printf("%d", num * i);
        if (i < 10) printf(" ");
    }
    return 0;
} 
