/*
Cho một dãy số nguyên dương có n phần tử (2<=n<=50). 
Hãy liệt kê số các phần tử trong dãy không nhỏ hơn các số đứng trước nó (tính cả phần tử đầu tiên).
*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        int n, arr[53], count = 1;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int max = arr[0];
        for (int i = 1; i < n; i++) {
            if (max <= arr[i]) {
                count++;
                max = arr[i];
            }
        }
        printf("%d\n", count);
    }
    return 0;
}