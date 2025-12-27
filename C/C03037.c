/*
Viết chương trình nhập vào một số n, không quá 18 chữ số.
Hãy thực hiện đếm số lần xuất hiện của các chữ số nguyên tố trong n và in ra màn hình. (Liệt kê theo thứ tự xuất hiện các chữ số)
*/

#include <stdio.h>

int main() {
    char n[19];
    scanf("%s", n);
    int count[10] = {0};
    int seen[10] = {0};

    for (int i = 0; n[i]; i++) {
        int digit = n[i] - '0';
        count[digit]++;
    }

    for (int i = 0; n[i]; i++) {
        int digit = n[i] - '0';
        if (!seen[digit]) {
            seen[digit] = 1;
            if (digit == 2 || digit == 3 || digit == 5 || digit == 7) printf("%d %d\n", digit, count[digit]);
        }
    }
    return 0;
}