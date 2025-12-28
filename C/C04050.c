/*
Cho dãy số a[] có n phần tử và dãy số b[] có m phần tử là các số nguyên dương nhỏ hơn 1000. 
Gọi tập hợp A là tập các số khác nhau trong a[], tập hợp B là tập các số khác nhau trong b[].
Hãy tìm tập giao của A và B, hiệu A – B và hiệu B – A. Mỗi tập kết quả viết trên một dòng theo thứ tự từ nhỏ đến lớn.
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[103], b[103];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);
    
    bool A[1001] = {false}, B[1001] = {false};
    for (int i = 0; i < n; i++) A[a[i]] = true;
    for (int i = 0; i < m; i++) B[b[i]] = true;

    for (int i = 1; i < 1001; i++) if (A[i] && B[i]) printf("%d ", i);
    printf("\n");

    for (int i = 1; i < 1001; i++) if (A[i] && !B[i]) printf("%d ", i);
    printf("\n");

    for (int i = 1; i < 1001; i++) if (!A[i] && B[i]) printf("%d ", i);
    return 0;
}