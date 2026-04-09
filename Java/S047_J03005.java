/*
Theo quy tắc viết tên tiếng Anh, họ tên sẽ thường được viết lại theo dạng chuẩn trong đó phần họ được viết sau cùng, phân tách với phần tên đệm và tên bởi dấu phẩy. 
Các chữ cái của phần họ đều viết hoa.
Cho trước các xâu họ tên (có thể không chuẩn). Hãy đưa về dạng chuẩn tương ứng.
 */

import java.util.*;

public class S047_J03005 {
    public static String lower(String s) {
        String S = s.toLowerCase();
        return Character.toUpperCase(S.charAt(0)) + S.substring(1);
    }

    public static String upper(String s) {
        return s.toUpperCase();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < t; i++) {
            String line = sc.nextLine();
            String[] words = line.trim().split("\\s+");
            String result = "";
            for (int j = 1; j < words.length; j++) {
                words[j] = lower(words[j]);
                result += words[j];
                if (j < words.length - 1) result += " ";
            }
            words[0] = upper(words[0]);
            result += ", ";
            result += words[0];
            System.out.println(result);
        }
        sc.close();
    }
}