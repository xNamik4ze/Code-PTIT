/*
Viết chương trình nhập vào ba số nguyên có trị tuyệt đối không quá 6 chữ số. Tìm giá trị nhỏ nhất trong ba số đó.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", abs(a) < abs(b) 
                ? (abs(a) < abs(c) ? abs(a) : abs(c)) 
                : (abs(b) < abs(c) ? abs(b) : abs(c))
    );
    return 0;
}