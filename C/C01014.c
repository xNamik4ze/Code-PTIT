/*
Viết chương trình nhập 2 số thực a,b và in ra nghiệm của phương trình bậc nhất a*x+b=0.
*/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == 0) {
        if (b == 0) printf("Vo so nghiem");
        else printf("Vo nghiem");
    } else printf("%.2f", -(double)b / a);
    return 0;
}