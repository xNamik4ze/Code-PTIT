/*
Viết chương trình nhập vào ma trận vuông các số nguyên dương cấp M (không quá 50). 
Thực hiện chuyển đổi hai đường chéo của ma trận và in ra ma trận kết quả.
*/

#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);
    int matrix[m][m];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) scanf("%d", &matrix[i][j]);
    }

    for (int i = 0; i < m; i++) {
        int temp = matrix[i][m-i-1];
        matrix[i][m-i-1] = matrix[i][i];
        matrix[i][i] = temp;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", matrix[i][j]);
            if (j < m - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}