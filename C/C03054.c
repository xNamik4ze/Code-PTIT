/*
Với một vài số nguyên dương có 1 chữ số, khi cắt đôi số đó theo chiều ngang và lấy nửa phía trên thì ta vẫn có một số nguyên. Cụ thể:
Số 0 cắt đôi vẫn ra số 0
Số 1 cắt đôi vẫn ra số 1
Số 8 cắt đôi ra số 0
Số 9 cắt đôi ra số 0
Các số khác cắt đôi sẽ không hợp lệ.
Cho một số nguyên dương không quá 18 chữ số. Hãy in ra kết quả “cắt đôi” của số đó.
Nếu không hợp lệ thì ghi ra INVALID. Chú ý: nếu cắt đôi ra một dãy toàn 0 thì cũng được coi là không hợp lệ. Kết quả cắt đôi thì không tính chữ số 0 ở đầu.
*/ 

#include <stdio.h>
#include <stdbool.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        long long n;
        scanf("%lld", &n);
        long long result = 0, rank = 1;
        bool valid = true;
        while (n > 0) {
            int temp = n % 10;
            if (temp == 1) result += 1 * rank;
            else if (temp == 0 || temp == 8 || temp == 9) result += 0;
            else {
                valid = false;
                break;
            }
            n /= 10;
            rank *= 10;
        }
        if (!valid || result == 0) printf("INVALID\n");
        else printf("%lld\n", result);
    }
    return 0;
}