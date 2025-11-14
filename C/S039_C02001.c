/*
Viết chương trình nhập vào n là cạnh của hình vuông và in ra hình vuông các ký tự *.
Giá trị n không quá 100. 
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("*");
        printf("\n");
    }
    return 0;
}