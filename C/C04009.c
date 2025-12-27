/*
Viết chương trình nhập vào mảng A gồm n phần tử (1 < n < 100). 
Các giá trị trong dãy không quá 1000. 
Thực hiện tách mảng đã cho thành mảng các số chẵn và mảng các số lẻ.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[103], even[103], odd[103];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) printf("%d ", arr[i]);
    }    
    printf("\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) printf("%d ", arr[i]);
    }
    return 0;
}