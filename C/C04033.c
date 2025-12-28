/*
Viết chương trình nhập vào mảng A gồm n phần tử số nguyên (2 < n < 100). 
Thực hiện loại bỏ các phần tử đã xuất hiện và In ra mảng kết quả.
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    int arr[103], res[103];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        bool valid = true;
        for (int j = 0; j < count; j++) {
            if (arr[i] == res[j]) valid = false;
        }
        if (valid) res[count++] = arr[i];
    }

    for (int i = 0; i < count; i++) {
        printf("%d", res[i]);
        if (i < count - 1) printf(" ");
    }
    return 0;
}