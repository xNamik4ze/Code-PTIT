/*
Nhập vào kích thước hình vuông (không quá 9). 
Vẽ hình vuông số theo nguyên tắc tương ứng theo mẫu trong ví  dụ dưới đây.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int size = n * 2 - 1;
    int center = n - 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int temp = 1 + (abs(i - center) > abs(j - center) ? abs(i - center) : abs(j - center));
            printf("%d", temp);
        }
        printf("\n");
    }
    return 0;
}