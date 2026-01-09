/*
Cho ma trận vuông A[N][N]. 
Hãy in các phần tử thuộc ma trận theo kiểu từ trái qua phải ở hàng đầu tiên, sau đó từ phải qua trái ở hàng thứ hai ...
Xem hình ví dụ để hiểu rõ hơn. 
 */

import java.util.*;

public class J02101 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int nn = n * n;
            int[] arr = new int[nn];
            for (int i = 0; i < nn; i++) {
                arr[i] = sc.nextInt();
            }

            for (int row = 0; row < n; row++) {
                int start = row * n;
                int end = start + n - 1;

                if (row % 2 == 1) {
                    for (int l = start, r = end; l < r; l++, r--) {
                        int temp = arr[l];
                        arr[l] = arr[r];
                        arr[r] = temp;
                    }
                }
            }

            for (int i = 0; i < nn; i++) {
                System.out.println(arr[i]);
                if (i < nn - 1) System.out.println(" ");
            }
        }
        sc.close();
    }
}