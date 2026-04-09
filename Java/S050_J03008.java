/*
Một số được coi là đẹp nếu đó là số thuận nghịch và chỉ toàn các chữ số nguyên tố.
Viết chương trình đọc vào các số nguyên dương có không quá 500 chữ số và kiếm tra xem số đó có đẹp hay không.
 */

import java.util.Scanner;

public class S050_J03008 {
    public static boolean isBeautiful (String n) {
        for (int i = 0; i <= n.length() / 2; i++) {
            int f1 = n.charAt(i) - '0';
            int f2 = n.charAt(n.length() - 1 - i) - '0';
            if (f1 != f2 || f1 != 2 && f1 != 3 && f1 != 5 && f1 != 7) return false;
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            String n = sc.nextLine().trim();
            System.out.println(isBeautiful(n) ? "YES" : "NO");
        }
        sc.close();
    }
}