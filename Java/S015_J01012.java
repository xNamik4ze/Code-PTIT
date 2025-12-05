/*
Cho số nguyên dương N.
Nhiệm vụ của bạn là hãy xác định xem có bao nhiêu ước số của N chia hết cho 2?
 */

import java.util.Scanner;

public class S015_J01012 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            long n = sc.nextLong();
            if (n % 2 != 0) {
                System.out.println(0);
                continue;
            }
            long proDivisor = 1;
            long oddDivisor = 1;
            int count2 = 1;
            while (n % 2 == 0) {
                n /= 2;
                count2 ++;
            }
            proDivisor *= count2;
            for (int j = 3; j * j <= n; j += 2) {
                int count3 = 1;
                while (n % j == 0) {
                    count3 ++;
                    n /= j;
                }
                proDivisor *= count3;
                oddDivisor *= count3;
            }
            if (n > 1) {
                proDivisor *= 2;
                oddDivisor *= 2;
            }
            System.out.println(proDivisor - oddDivisor);
        }
        sc.close();
    }
}
