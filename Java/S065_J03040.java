/*
Biển số xe máy được quy định gồm các thành phần:
Hai chữ số đầu là mã quản lý theo tỉnh – thành phố (ví dụ mã của Hà Nội là 29 đến 31)
Sau đó là một chữ cái in hoa (từ A đến Z) và một chữ số. Cặp chữ cái và chữ số này được cấp theo khu vực quận – huyện.
Tiếp theo là dấu gạch ngang, rồi đến một dãy 5 số gồm 2 cụm: 3 chữ số đầu và hai chữ số sau, phân tách bởi dấu chấm.
Thông thường, người ta chỉ quan tâm đến 5 chữ số cuối. Giả sử các trường hợp sau được coi là đẹp:
Cả 5 chữ số được sắp theo thứ tự tăng chặt từ trái qua phải.
Cả 5 chữ số đều bằng nhau
Ba chữ số đầu bằng nhau và hai chữ số cuối bằng nhau
Cả 5 chữ số đều là 6 và/hoặc 8 (số lộc phát).
 */

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class S065_J03040 {
    public static boolean valid1(List<Integer> digits) {
        for (int digit : digits) {
            if (digit != 6 && digit != 8) return false;
        }
        return true;
    }

    public static boolean valid2(List<Integer> digits) {
        for (int i = 0; i < digits.size() - 1; i++) {
            if (digits.get(i) >= digits.get(i + 1)) return false; 
        }
        return true;
    }

    public static boolean valid3(List<Integer> digits) {
        int x = digits.get(0);
        for (int i = 1; i < 3; i++) {
            if (digits.get(i) != x) return false;
        }
        if (digits.get(3) != digits.get(4)) return false;
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            String S = sc.nextLine();
            String s = String.valueOf(S.substring(5)).replace(".","");
            List<Integer> digits = new ArrayList<>();
            for (char c : s.toCharArray()) {
                digits.add(c - '0');
            }    
            
            if (valid1(digits) || valid2(digits) || valid3(digits)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }            
        }
        sc.close();
    }
}