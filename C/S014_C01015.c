/*
Viết chương trình nhập 3 số thực a,b,c và in ra nghiệm của phương trình bậc hai a*x2 + b*x + c = 0.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int delta = b * b - (4 * a * c);
    if (delta < 0) printf("NO");
    else if (delta == 0) printf("%.2f", -(double)b / (2 * a));
    else {
        double x = sqrt(delta);
        double y = 2 * a;
        printf("%.2f %.2f", (-b + x) / y, (-b - x) / y);
    }
    return 0;
}