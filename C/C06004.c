/*
Viết chương trình nhập vào một xâu ký tự S, thực hiện phân tích xâu đã nhập chứa bao nhiêu chữ cái, chữ số và các ký tự khác.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100003];
    int count1 = 0, count2 = 0;
    fgets(s, sizeof(s), stdin);
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (isalpha(s[i])) count1++;
        else if (isdigit(s[i])) count2++;
    }
    printf("%d %d %d", count1, count2, len - 1 - count1 - count2);
}