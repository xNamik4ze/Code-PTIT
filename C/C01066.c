/*
Viết chương trình nhập vào ba số nguyên có trị tuyệt đối không quá 6 chữ số. Tìm giá trị nhỏ nhất trong ba số đó.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int min = abs(a);
    if (abs(b) < min) min = abs(b);
    if (abs(c) < min) min = abs(c);
    printf("%d", min);
    return 0;
}