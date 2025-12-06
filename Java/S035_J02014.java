/*
Cho dãy số A[] gồm có N phần tử nguyên dương. 
Phần tử thứ i được gọi là điểm cân bằng của dãy số nếu như tổng các số bên trái bằng tổng các số bên phải của nó.
Nhiệm vụ của bạn là điểm cân bằng đầu tiên của dãy A[] cho trước. Nếu không có đáp án, in ra -1.
 */

import java.util.Scanner;

public class S035_J02014 {
    public static void main(String[] args) {
        Scanner sc = new java.util.Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] A = new int[n];
            long total = 0;
            for (int i = 0; i < n; i++) {
                A[i] = sc.nextInt();
                total += A[i];
            }

            long leftSum = 0;
            int result = -1;
            for (int i = 0; i < n; i++) {
                long rigthSum = total - leftSum - A[i];
                if (leftSum == rigthSum) {
                    result = i + 1;
                    break;
                }
                leftSum += A[i];
            }
            System.out.println(result);
        }
        sc.close();
    }
}
