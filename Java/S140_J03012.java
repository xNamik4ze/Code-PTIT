import java.math.BigInteger;
import java.util.Scanner;

public class S140_J03012 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0) {
            String x = sc.nextLine();
            String y = sc.nextLine();
            BigInteger X = new BigInteger(x);
            BigInteger Y = new BigInteger(y);
            BigInteger sum = X.add(Y);
            System.out.println(sum.toString());
        }
        sc.close();
    }
}
