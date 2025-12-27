/*
Nam rất ghét chữ số 4 nên không muốn xuất hiện chữ số 4 trong các số may mắn của mình. 
Dãy số may mắn của Nam có N chữ số và phải thỏa mãn tính chất thuận nghịch, tổng chữ số phải chia hết cho 10.
Cho số N, hãy liệt kê các số may mắn của Nam với đúng N chữ số.
*/

#include <stdio.h>
#include <stdbool.h>

int sumDigit(int n) {
    int sum = 0;
    while (n > 0) {
        int temp = n % 10;
        sum += temp;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int k = (n + 1) / 2;
        int start = 1;
        for (int i = 1; i < k; i++) start *= 10;
        int end = start * 10;

        for (int i = start; i < end; i++) {
            int temp = i;
            bool valid = true;
            while (temp > 0) {
                int digit = temp % 10;
                if (digit == 4) {
                    valid = false;
                    break;
                } 
                temp /= 10;
            }
            if (!valid) continue;

            int sum = sumDigit(i);
            if (n % 2 == 0) {
                sum *= 2;
            }
            else {
                sum = sum * 2 - (i % 10);
            }

            if (sum % 10 == 0) {
                printf("%d", i);
                int rev = i;
                if (n % 2 != 0) rev /= 10;
                while (rev > 0) {
                    printf("%d", rev % 10);
                    rev /= 10;
                }
                printf(" ");
            }   
        }
        printf("\n");
    }
    return 0;
}