/*
Cho số nguyên dương N. Hãy đưa ra ước số nguyên tố lớn nhất của N.
 */

import java.util.Scanner;

public class S017_J01014 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            long n = sc.nextLong();
            long max = 1;
            while (n % 2 == 0) {
                n /= 2;
                max = 2;
            }
            for (long i = 3; i * i <= n; i += 2) {
                while (n % i ==0) {
                    n /= i;
                    max = i;
                }
            }
            if (n > 2) max = n;
            System.out.println(max);
        }
        sc.close();
    }
}