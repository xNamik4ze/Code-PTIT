/*
Cho số nguyên dương n. Hãy kiểm tra xem n có phải là số trong dãy Fibonacci hay không?
 */

import java.util.*;

public class S010_J01007 {
    static long[] f = new long[93];

    public static boolean valid(long n) {
        for (int i = 0; i < 93; i++) {
            if (n == f[i]) return true;
        }
        return false;
    }
    public static void main(String[] args) {
        f[0] = 0;
        f[1] = 1;
        for (int i = 2; i < 93; i++) f[i] = f[i-1] + f[i-2];

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i ++) {
            long n = sc.nextLong();
            if (valid(n)) System.out.println("YES");
            else System.out.println("NO");
        }
        sc.close();
    }
}