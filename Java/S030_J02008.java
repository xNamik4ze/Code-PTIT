/*
Cho số tự nhiên n. 
Nhiệm vụ của bạn là tìm số nguyên nhỏ nhất chia hết cho 1, 2, .., n.
 */

import java.util.Scanner;

public class S030_J02008 {
    public static boolean isPrime(int n) {
        if (n < 2) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;
        for (int i = 3; i * i <= n; i+= 2) {
            if (n % i == 0) return false;
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- >  0) {
            int N = sc.nextInt();
            long result = 1;
            for (int i = 2; i <= N; i++) {
                if (isPrime(i)) {
                    long temp = i;
                    while (temp * i <= N) temp *= i;
                    result *= temp;
                }
            }
            System.out.println(result);
        }
        sc.close();
    }  
}
