/*
Cho N số nguyên. Nhiệm vụ của bạn là phân tích các số nguyên đã cho dưới dạng tích của các thừa số nguyên tố, sau đó tính tổng các ước số nguyên tố này.
*/

import java.util.Scanner;

public class J01013 {
    static final int MAX = 2000000;
    static int[] minPrime = new int[MAX + 1];

    static void sieve() {
        for (int i = 2; i * i <= MAX; i++) {
            if (minPrime[i] == 0) {
                for (int j = i * i; j <= MAX; j += i) {
                    if (minPrime[j] == 0) minPrime[j] = i;
                }
            }
        }
        for (int i = 2; i <= MAX; i++) {
            if (minPrime[i] == 0) minPrime[i] = i;
        }
    }

    public static void main(String[] args) {
        sieve();
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        long sum = 0;
        while (t-- > 0) {
            int n = sc.nextInt();
            while (n > 1) {
                sum += minPrime[n];
                n /= minPrime[n];
            }
        }
        System.out.println(sum);
        sc.close();
    }
}