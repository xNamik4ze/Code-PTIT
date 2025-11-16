/*
Viết chương trình nhập vào chiêu cao của tam giác (không quá 100) và thực hiện in ra tam giác vuông theo mẫu trong ví dụ.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) printf("~");
        for (int j = 0; j < i + 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}