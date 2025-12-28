/*
Cho một ma trận cấp M*N chỉ bao gồm các số nguyên dương không quá 1000.
Hãy viết chương trình trước hết loại bỏ hàng đầu tiên sau đó loại bỏ cột đầu tiên ra khỏi ma trận.     
*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int _ = 1; _ <= t; _++) {
        printf("Test %d:\n", _);
        int r, c;
        scanf("%d %d", &r, &c);
        int matrix[r][c];
        for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) scanf("%d", &matrix[i][j]);
        }

    for (int i = 1; i < r; i++) {
        for (int j = 1; j < c; j++) {
            printf("%d", matrix[i][j]);
            if (j < c - 1) printf(" ");
        }
        printf("\n");
        }
    }
    return 0;
}