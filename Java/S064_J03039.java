/*
Cho hai số nguyên dương a và b không quá 500 chữ số. Hãy kiểm tra xem a chia hết cho b hoặc b chia hết cho a hay không.
 */

import java.util.Scanner;
import java.math.BigInteger;

public class S064_J03039 {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        for (int i = 0; i < t; i++) {
            BigInteger a = sc.nextBigInteger();
            BigInteger b = sc.nextBigInteger();
            
            if (a.mod(b).equals(BigInteger.ZERO) || b.mod(a).equals(BigInteger.ZERO)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        sc.close();
    }    
}
