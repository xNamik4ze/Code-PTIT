/*
Cho hai số a và b trong đó a≤10^12, b≤10^250. 
Nhiệm vụ của bạn là tìm ước số chung lớn nhất của hai số a, b.
 */

import java.util.Scanner;
import java.math.BigInteger;

public class S053_J03013 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            String x = sc.nextLine().trim();
            String y = sc.nextLine().trim();
            BigInteger X = new BigInteger(x);
            BigInteger Y = new BigInteger(y);
            BigInteger result = X.subtract(Y).abs();
            int decimal = Math.max(x.length(), y.length());
            String output = String.format("%0" + decimal + "d", result);
            System.out.println(output);
        }
        sc.close();
    }
}
