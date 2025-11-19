/*
Cho hai số nguyên dương n và k. Hãy kiểm tra xem giai thừa của n (n!) có chia hết cho 2k hay không.
*/

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int count = 0, divide = 2;
    while (n / divide > 0) {
        count += n / divide;
        divide *= 2;
    }
    if (count >= k) printf("Yes");
    else printf("No");
    return 0;
}