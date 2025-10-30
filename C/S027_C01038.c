/*
Cho một số nguyên dương n không quá 9 chữ số.
Hãy thực hiện đổi vị trí của chữ số đầu tiên và chữ số cuối cùng.
Lưu ý trong trường hợp chữ số cuối cùng là 0 thì khi đổi chỗ sẽ được loại bỏ (ví dụ 9800 -> 809)
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int first = n % 10, last = n, count = 0;
    while(last > 9) {
        last /= 10;
        count ++;
    }
    int dif = (last - first) * pow(10, count);
    n = n - dif + (last - first);
    printf("%d", n);
    return 0;
}