import java.util.*;
import java.math.*;
import java.io.*;

public class S2c {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
        BigInteger sum = BigInteger.ZERO;
        BigInteger product = BigInteger.ONE;
        while(sc.hasNextBigInteger()) {
            BigInteger num = sc.nextBigInteger();
            sum = sum.add(num);
            product = product.multiply(num);
        }
        System.out.println(sum);
        System.out.println(product);
        sc.close();
    }
}
