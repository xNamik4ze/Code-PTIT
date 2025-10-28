/*
Nhập vào 2 số tự nhiên  m và n, sao cho  m<n và cả hai số đều không quá 9 chữ số. Hãy liệt kê các số chính phương trong đoạn [m,n
*/

#include <stdio.h>
#include <math.h>

int main() {
    int m , n;
    scanf("%d %d", &m, &n);

    int bot = ceil(sqrt(m));
    int top = floor(sqrt(n));

    int count = top - bot + 1;
    printf("%d\n", count);
    for (int i = bot; i < top + 1; i++) printf("%d\n", i * i);
    
    return 0;
}
