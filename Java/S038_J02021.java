/*
Cho hai số N và K (2 < K < N < 10).
Sử dụng thuật toán sinh kế tiếp hoặc quay lui, hãy liệt kê tất cả các tổ hợp chập K phần tử của N số nguyên dương đầu tiên theo thứ tự tăng dần.
*/

import java.util.*;

public class S038_J02021 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();

        int[] comb = new int[K];
        for (int i = 0; i < K; i++) comb[i] = i + 1;

        int count = 0;
        while (true) {
            for (int i = 0; i < K; i++) {
                System.out.print(comb[i]);
            }
            System.out.print(" ");
            count++;

            int i;
            for (i = K - 1; i >= 0; i--) {
                if (comb[i] < N - K + i + 1) {
                    comb[i]++;
                    for (int j = i + 1; j < K; j++)
                        comb[j] = comb[j - 1] + 1;
                    break;
                }
            }

            if (i < 0) break;
        }
        System.out.println();
        System.out.println("Tong cong co " + count + " to hop");
        sc.close();

    }
}
