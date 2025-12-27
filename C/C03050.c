/*
Trên tờ giấy A4, Nam đã đánh dấu sẵn N điểm từ 1 đến N và liệt kê danh sách N-1 đoạn thẳng nối các điểm với nhau.
Nam nhờ Bình kiểm tra giúp xem với danh sách N-1 đoạn thẳng đó thì có điểm nào là điểm trung tâm hay không.
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    int count[100003] = {0};

    for (int i = 0; i < n - 1; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        count[x]++;
        count[y]++;
    }

    bool valid = false;
    for (int i = 1; i <= n; i++) {
        if (count[i] == n - 1) {
            valid = true;
            break;
        }
    }

    if (valid) printf("Yes");
    else printf("No");
    return 0;
}