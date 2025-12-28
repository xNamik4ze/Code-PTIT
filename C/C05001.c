/*
Viết chương trình nhập một ma trận số nguyên dương cỡ M*N với 2<N,M<10, các số không quá 100. 
Hãy in ra chuyển vị của ma trận đó.
*/

#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int matrix[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) scanf("%d", &matrix[i][j]);
    }

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d", matrix[j][i]);
            if (j < r - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}