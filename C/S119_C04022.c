/*
Viết chương trình nhập vào mảng A có n phần tử số nguyên (2 < n < 100). 
Tìm giá trị lớn nhất và lớn thứ hai trong mảng.
Dữ liệu vào đảm bảo dãy có ít nhất 2 số khác nhau.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int max1 = -1000000000;
    int max2 = -1000000000;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x > max1) {
            max2 = max1;
            max1 = x;
        } else if (x > max2 && x != max1) {
            max2 = x;
        }
    }

    printf("%d %d\n", max1, max2);
    return 0;
}
