/*
Viết chương trình nhập hai số nguyên dương a,b thỏa mãn 2<a<b<100.
Một cặp số (i,j) được gọi là nguyên tố cùng nhau nếu i ≠ j và ước số chung lớn nhất của i với j là 1
Hãy liệt kê các cặp số nguyên tố cùng nhau trong đoạn [a,b] theo thứ tự từ nhỏ đến lớn.
*/

#include <stdio.h>

int gcdFind(int a, int b) {
    if (b == 0) return a;
    return gcdFind(b, a % b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i < b; i++) {
        for (int j = i + 1; j <= b; j++) {
            if (gcdFind(i, j) == 1) printf("(%d,%d)\n", i, j);
        }
    }
    return 0;
}