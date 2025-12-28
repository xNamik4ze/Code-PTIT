/*
Viết chương trình nhập vào mảng A gồm n phần tử số nguyên (2 < n < 100). 
Đếm các phần tử xuất hiện nhiều hơn một lần và liệt kê các số đó.
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    int a[100], unique[100];
    int count = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        int freq = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == a[i]) freq++;
        }
        if (freq > 1) {
            bool valid = true;
            for (int j = 0; j < count; j++) {
                if (a[i] == unique[j]) {
                    valid = false;
                    break;
                } 
            }
            if (valid) unique[count++] = a[i];
        }
    }

    printf("%d\n", count);
    for (int i = 0; i < count; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");
    return 0;
}
