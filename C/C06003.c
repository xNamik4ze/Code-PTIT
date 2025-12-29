/*
Một từ trong xâu ký tự được định nghĩa là một dãy ký tự liên tiếp không có khoảng trống. 
Hãy đếm số từ của xâu và in kết quả ra màn hình.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {
        char s[203];
        int count = 0;
        fgets(s, sizeof(s), stdin);
        int len = strlen(s);
        for (int i = 0; i < len; i++) {
            if (!isspace(s[i]) && (i == 0 || isspace(s[i-1]))) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}