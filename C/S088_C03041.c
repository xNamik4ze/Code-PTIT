/*
Cho 2 đỉnh là góc dưới bên trái và góc trên bên phải của hình chữ nhật trong hệ tọa độ Oxy. 
Hãy kiểm tra xem đó có phải là hình vuông hay không.
*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (c - a == d - b) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}