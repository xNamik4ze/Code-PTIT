#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int count = 0, divide = 2;
    while (n / divide > 0) {
        count += n / divide;
        divide *= 2;
    }
    if (count >= k) printf("YES");
    else printf("NO");
    return 0;
}