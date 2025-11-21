/*
Viết chương trình tính tổng S = 1 + 1.2 + 1.2.3 + ... + 1.2.3...n
 */

import java.util.Scanner;

public class S012_J01009 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long product = 1;
        long sum = 0;
        for (int i = 1; i <= n; i++) {
            product *= i;
            sum += product;
        }
        System.out.print(sum);
        sc.close();
    }
}
