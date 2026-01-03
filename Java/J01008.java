/*
Hãy phân tích một số nguyên dương thành tích các thừa số nguyên tố.
 */

import java.util.Scanner;

public class J01008 {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 1; i <= t; i++) {
            int n = sc.nextInt();
            System.out.print("Test " + i + ": ");

            int count = 0;
            while (n % 2 == 0) {
                count++;
                n /= 2;
            }
            if (count > 0) System.out.print(2 + "(" + count + ") ");

            for (int j = 3; j * j <= n; j += 2) {
                count = 0;
                while (n % j == 0) {
                    count++;
                    n /= j;
                }
                if (count > 0) System.out.print(j + "(" + count + ") ");
            }

            if (n > 1) System.out.print(n + "(1)" );
            System.out.println();
        }
        sc.close();
    }
}
