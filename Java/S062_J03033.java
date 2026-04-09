/*
Viết chương trình tính bội số chung nhỏ nhất của hai số nguyên dương lớn (có thể đến 500 chữ số).
 */

import java.util.Scanner;
import java.math.BigInteger;

public class S062_J03033 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            BigInteger x = sc.nextBigInteger();
            BigInteger y = sc.nextBigInteger();
            BigInteger gcd = x.gcd(y);
            BigInteger lcm = x.multiply(y).divide(gcd);
            System.out.println(lcm);
        }
        sc.close();
    }
}
