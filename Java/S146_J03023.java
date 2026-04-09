/*
Bảng chữ số La Mã bao gồm các chữ cái với ý nghĩa I=1; V=5; X=10; L=50; C=100;D=500; M=1000.
 Một số quy tắc viết các số La Mã như sau:
Tính từ trái sang phải giá trị của các chữ số và nhóm chữ số giảm dần.
I chỉ có thể đứng trước V hoặc X, X chỉ có thể đứng trước L hoặc C, C chỉ có thể đứng trước D hoặc M.
Các chữ cái I, X, C, M, không được lặp lại quá ba lần liên tiếp; các chữ cái V, L, D không được lặp lại quá một lần liên tiếp.
Bài toán đặt ra là cho một xâu ký tự mô tả đúng một số La Mã. Hãy tính giá trị thập phân của số đó
 */

import java.util.*;

public class S146_J03023 {
    public static int romanToInt(String s) {
        Map<Character, Integer> romanValue = new HashMap<>();
        romanValue.put('I', 1);
        romanValue.put('V', 5);
        romanValue.put('X', 10);
        romanValue.put('L', 50);
        romanValue.put('C', 100);
        romanValue.put('D', 500);
        romanValue.put('M', 1000);
        
        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            int value = romanValue.get(s.charAt(i));
            if (i < s.length() - 1 && value < romanValue.get(s.charAt(i + 1))) {
                result -= value;
            } else {
                result += value;
            }
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            String s = sc.nextLine();
            System.out.println(romanToInt(s));
        }
        sc.close();
    }
}
