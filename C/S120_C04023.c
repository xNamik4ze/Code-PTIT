/*
Viết chương trình nhập vào mảng A gồm n phần tử (1 < n < 100). 
Thực hiện sắp xếp tăng dần các phần tử của mảng và in ra màn hình.
*/

#include <stdio.h>

void quickSort(int a[], int left, int right) {
    int i = left, j = right;
    int pivot = a[(left + right) / 2];

    while (i <= j) {
        while (a[i] < pivot) i++;
        while (a[j] > pivot) j--;

        if (i <= j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }

    if (left < j) quickSort(a, left, j);
    if (i < right) quickSort(a, i, right);
}

int main() {
    int n;
    int a[103];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    quickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
