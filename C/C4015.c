/*
Cho dãy số A có n phần tử chỉ bao gồm các số nguyên dương (không quá 10^5). 
Hãy đếm xem mỗi số xuất hiện bao nhiêu lần.      
*/

#include <stdio.h>
#include <stdbool.h>

#define MAX 100000

int main() {
    int t;
    scanf("%d", &t);
    for (int j = 1; j <= t; j++) {
        int n;
        scanf("%d", &n);
        int arr[103];
        int freq[MAX + 3] = {0};
        bool printed[MAX + 3] = {false};
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            freq[arr[i]]++;
        }

        printf("Test %d:\n", j);
        for (int i = 0; i < n; i++) {
            if (!printed[arr[i]]) {
                printf("%d xuat hien %d lan", arr[i], freq[arr[i]]);
                printf("\n");
                printed[arr[i]] = true;
            }
        }
    }
    return 0;
}