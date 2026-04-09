/*
Một số được coi là đẹp nếu đó là số thuận nghịch, bắt đầu và kết thúc bằng chữ số 8 và tổng chữ số chia hết cho 10.
 Viết chương trình đọc vào các số nguyên dương có không quá 500 chữ số và kiếm tra xem số đó có đẹp hay không.
 */

import java.util.Scanner;

public class S049_J03007 {
    public static boolean isBeautiful (String n) {
        int sum = 0;
        if (n.charAt(0) - '0' != 8 || n.charAt(n.length() - 1) -'0' != 8) return false;
        for (int i = 0; i < (n.length() + 1) / 2; i++) {
            int f1 = n.charAt(i) - '0';
            int f2 = n.charAt(n.length() - 1 - i) - '0';
            if (f1 != f2) return false;
            sum += (i == n.length() - 1 - i) ? f1 : (f1 + f2);
        }
        if (sum % 10 != 0) return false;
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