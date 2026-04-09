/*
Cho số tự nhiên N, hãy kiểm tra xem N có phải là số chia hết cho 11 hay không? 
Đưa ra 1 nếu N chia hết cho 11, trái lại đưa ra 0.
 */

import java.util.Scanner;
import java.math.BigInteger;

public class S142_J03016 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            BigInteger N = sc.nextBigInteger();
            BigInteger n = BigInteger.valueOf(11);
            if (N.mod(n).equals(BigInteger.ZERO)) {
                System.out.println(1);
            } else {
                System.out.println(0);
            }
        }
        sc.close();
    }
}
