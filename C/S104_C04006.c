#include <stdio.h>
 
int main()  {
    int n;
    scanf("%d", &n);
    int arr[103];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int l = 0, r = n - 1;
    while (l < r) {
        int temp = arr[r];
        arr[r] = arr[l];
        arr[l] = temp;
        l++;
        r--;
    }

    for (int i =  0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(" ");
    }
    return 0;
}