/*
Một số gọi là số giảm nếu các chữ số từ trái qua phải tạo thành dãy giảm (tức là chữ số phía sau nhỏ hơn chữ số ngay trước).
Viết chương trình đếm các số giảm có trong đoạn [a,b].  
*/

#include <stdio.h>
#include <stdbool.h>

bool isValid(int n) {
    int pre = -1;
    while (n > 0) {
        int digit = n % 10;
        if (digit <= pre) return false;
        pre = digit;
        n /= 10;
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b, count = 0;
        scanf("%d %d", &a ,&b);
        for (int i = a; i <= b; i++) {
            if (isValid(i)) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}