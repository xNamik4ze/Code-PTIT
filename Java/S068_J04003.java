/*
Viết chương trình khai báo lớp Phân số gồm hai thuộc tính private là tử số và mẫu số. 
Các giá trị đều nguyên dương và không quá 18 chữ số.
Sau đó thực hiện nhập vào một phân số và in ra phân số đó ở dạng tối giản.
 */

import java.util.Scanner;
import java.math.BigInteger;

public class S068_J04003 {
    public static BigInteger[] shorten(BigInteger x, BigInteger y) {
        BigInteger gcd = x.gcd(y);
        BigInteger num = x.divide(gcd);
        BigInteger den = y.divide(gcd);
        return new BigInteger[]{num, den};
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger x = sc.nextBigInteger();
        BigInteger y = sc.nextBigInteger();
        BigInteger[] result = shorten(x, y);
        System.out.println(result[0] + "/" + result[1]);        
        sc.close();
    }
}
