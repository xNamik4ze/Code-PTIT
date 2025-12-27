/*
Một số gọi là số không giảm nếu các chữ số từ trái qua phải tạo thành dãy không giảm (tức là không có chữ số nào phía sau nhỏ hơn chữ số ngay trước nó). 
Viết chương trình liệt kê các số không giảm có N chữ số (1<N<7).  
*/

#include <stdio.h>
#include <stdbool.h>

bool valid(int n) {
    int cur = n % 10;
    n /= 10;
    while (n > 0) {
        int next = n % 10;
        if (cur < next) return false;
        cur = next;
        n /= 10;
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int b = 1;
        while (n--) {
            b *= 10;
        }
        int a = b / 10;

        for (int i = a; i < b; i++) {
            if (valid(i)) printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}