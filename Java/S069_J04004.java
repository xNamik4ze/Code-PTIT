/*
Viết chương trình xây dựng lớp Phân số gồm hai phần tử là tử số và mẫu số.
Các giá trị đều nguyên dương và không quá 9 chữ số.
Sau đó thực hiện nhập vào hai phân số p và q. Tính tổng p + q, rút gọn và in ra kết quả.
 */

import java.util.Scanner;
import java.math.BigInteger;

public class S069_J04004 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger x1 = sc.nextBigInteger();
        BigInteger y1 = sc.nextBigInteger();
        BigInteger x2 = sc.nextBigInteger();
        BigInteger y2 = sc.nextBigInteger();
        if (y1.compareTo(y2) == 0) {
            BigInteger ts = x1.add(x2);
            BigInteger gcd = ts.gcd(y1);
            ts = ts.divide(gcd);
            y1 = y1.divide(gcd);
            System.out.println(ts + "/" + y1);
        } else {
            BigInteger ucln = y1.gcd(y2);
            BigInteger bcnn = y1.multiply(y2).divide(ucln);
            x1 = x1.multiply(bcnn).divide(y1);
            x2 = x2.multiply(bcnn).divide(y2);
            BigInteger ts = x1.add(x2);
            BigInteger gcd = ts.gcd(bcnn);
            ts = ts.divide(gcd);
            bcnn = bcnn.divide(gcd);
            System.out.println(ts + "/" + bcnn);
        }
        sc.close();
    }
}
