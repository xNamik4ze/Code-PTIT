/*
Cho số nguyên dương N. Hãy kiểm tra xem N có thỏa mãn đồng thời hai tính chất sau đây hay không?
Tổng chữ số của N chia hết cho 10
Các chữ số cạnh nhau đều khác nhau đúng 2 đơn vị
 */

import java.util.Scanner;

public class S020_J01018 {
    public static boolean isValid(long n) {
        String N = String.valueOf(n);
        int result = 0;
        for (int i = 0; i < N.length(); i++) {
            int f1 = N.charAt(i) - '0';
            result += f1;
            if (i > 0) {
                int f2 = N.charAt(i - 1) - '0';
                if (Math.abs(f1 - f2) != 2) return false;
            }
        }
        return result % 10 == 0;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            long n = sc.nextLong();
            if (isValid(n)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        sc.close();
    }
}
