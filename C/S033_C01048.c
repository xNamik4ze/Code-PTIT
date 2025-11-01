/*
Cho số nguyên dương N không quá 9 chữ số.
Hãy đếm xem N có bao nhiêu chữ số lẻ và bao nhiêu chữ số chẵn. 
Nếu không tồn tại số lẻ hoặc số chẵn thì in ra kết quả là 0 cho loại số tương ứng
*/

#include <stdio.h>

int main() {
    int n, even = 0, odd = 0;
    scanf("%d", &n);
    while (n > 0) {
        if (n % 2 == 0) even ++;
        else odd++;
        n /= 10;
    }
    printf("%d %d", odd, even);
    return 0;
}