/*
Tại ngân hàng có các mệnh giá bằng 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000, số lượng tờ tiền mỗi mệnh giá là không hạn chế. Một người cần đổi số tiền có giá trị bằng N. 
Hãy xác định xem số tờ tiền ít nhất sau khi đổi là bao nhiêu?
*/

#include <stdio.h>

int main() {
    int coins[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int t;
    scanf("%d", &t);
    while (t--) {
        int N;
        scanf("%d", &N);
        int count = 0;
        for (int i = 0; i < 10; i++) {
            if (N == 0) break;
            int num = N / coins[i];
            count += num;
            N -= num * coins[i];
        }
        printf("%d\n", count);
    }
    return 0;
}
