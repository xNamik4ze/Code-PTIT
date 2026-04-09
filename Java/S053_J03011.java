/*
Cho hai số a và b trong đó a≤10^12, b≤10^250. 
Nhiệm vụ của bạn là tìm ước số chung lớn nhất của hai số a, b.
 */

import java.util.Scanner;
import java.math.BigInteger;

public class S053_J03011 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            BigInteger a = sc.nextBigInteger();
            BigInteger b = sc.nextBigInteger();
            BigInteger gcd = a.gcd(b);
            System.out.println(gcd);
        }
        sc.close();
    }
}