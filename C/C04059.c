/*
Dãy số Fibonacci được định nghĩa theo công thức như sau:
F1 = 1
F2 = 1
Fn = Fn-1 + Fn-2 với n>2
Cho hai số nguyên dương a và b (1 <= a < b < 93). Viết chương trình liệt kê các số Fibonacci từ số thứ a đến số thứ b.
*/

#include <stdio.h>

int main()  {
    int t;
    scanf("%d", &t);
    long long fibo[93];
    fibo[1] = 1;
    fibo[2] = 1;
    for (int i = 3; i < 93; i++) fibo[i] = fibo[i-1] + fibo[i-2];
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        for (int i = a; i <= b; i++) {
            printf("%lld", fibo[i]);
            if (i < b) printf(" ");
        }
        printf("\n");
    }
    return 0;
}