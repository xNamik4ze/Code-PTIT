/*
Một xâu họ tên được coi là viết chuẩn nếu chữ cái đầu tiên mỗi từ được viết hoa, các chữ
cái khác viết thường. Các từ cách nhau đúng một dấu cách và không có khoảng trống
thừa ở đầu và cuối xâu. Hãy viết chương trình đưa các xâu họ tên về dạng chuẩn.
 */

import java.util.*;

public class S046_J03004 {
    public static String reverse(String s) {
        String S = s.toLowerCase();
        return Character.toUpperCase(S.charAt(0)) + S.substring(1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < t; i++) {
            String line = sc.nextLine();
            String[] words = line.trim().split("\\s+");
            for (int j = 0; j < words.length; j++) {
                words[j] = reverse(words[j]);
            }
            System.out.println(String.join(" ",words));
        }
        sc.close();
    }
}