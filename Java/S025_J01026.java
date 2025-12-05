/*
Nhập một số nguyên dương không quá 9 chữ số. Hãy kiểm tra xem đó có phải số chính phương hay không.
Dòng đầu của dữ liệu vào ghi số bộ test, mỗi bộ test là một số nguyên dương ghi trên một dòng. 
 */

import java.util.Scanner;

public class S025_J01026 {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            long n = sc.nextLong();
            if (n <= 3) {
                System.out.println("NO");
                continue;
            }

            int lastDigit = (int)(n % 10);
            if (lastDigit == 2 || lastDigit == 3 || lastDigit == 7 || lastDigit == 8) {
                System.out.println("NO");
                continue;
            }

            long mod = n % 16;
            if (mod != 0 && mod != 1 && mod != 4 && mod != 9) {
                System.out.println("NO");
                continue;
            }

            long x = (long)Math.sqrt(n);
            if (x * x == n) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        sc.close();
    }
}