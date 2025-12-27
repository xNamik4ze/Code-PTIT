/*
Viết chương trình nhập vào mảng A gồm n phần tử số nguyên (2 < n < 100). 
Tìm giá trị nhỏ nhất và nhỏ thứ hai và in ra.
Dữ liệu vào đảm bảo luôn có ít nhất 2 số khác nhau.
*/

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int A[103], min1 = INT_MAX, min2 = INT_MAX;
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        if (A[i] < min1) {
            min2 = min1;
            min1 = A[i];
        }
        else if (A[i] < min2 && A[i] > min1) min2 = A[i];
    }
    printf("%d %d", min1, min2);
    return 0;
} 