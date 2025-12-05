/*
Viết chương trình kiểm tra số nguyên dương N có thỏa mãn tính chất: tất cả các chữ số cạnh nhau chỉ sai khác nhau đúng một đơn vị hay không. 
Ví dụ: số 123212 là số thỏa mãn, số 34578 không thỏa mãn.
 */

import java.util.Scanner;

public class S019_J01017 {
    public static boolean checkAdjacetDigit(long n) {
        String N = String.valueOf(n);
        for (int i = 0; i < N.length() - 1; i++) {
            int f1 = N.charAt(i) - '0';
            int f2 = N.charAt(i+1) - '0';
            if (Math.abs(f1 - f2) != 1) return false;
        }
        return true;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            long n = sc.nextLong();
            System.out.println(checkAdjacetDigit(n) ? "YES" : "NO");
        }
        sc.close();
    }
}