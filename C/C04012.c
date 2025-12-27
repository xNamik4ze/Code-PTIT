/*
Viết chương trình nhập vào mảng một chiều n phần tử (1 < n < 100) và thực hiện in ra các phần tử xuất hiện nhiều hơn 1 lần trong mảng theo thứ tự xuất hiện (Nếu không có phần tử nào thỏa mãn in ra 0).
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

    for (int i = 0; i < count; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");
    return 0;
}
