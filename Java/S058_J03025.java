/*
Cho trước một xâu S. Bạn f thay đổi đúng 1 kí tự. Hãy kiểm tra xem liệu bạn có thể tạo ra được xâu đối xứng hay không.
 */

import java.util.Scanner;

public class S058_J03025 {
    public static boolean isValid (String s) {
        int count = 0;
        int n = s.length();
        for (int i = 0; i < n / 2; i++) {
            if (s.charAt(i) != s.charAt(n - 1 - i)) {
                count++;
            }
        }
        if (count == 1) return true;
        if (count == 0 && n % 2 == 1) return true;
        return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            String s = sc.nextLine();
            if (isValid(s)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        sc.close();
    }
}