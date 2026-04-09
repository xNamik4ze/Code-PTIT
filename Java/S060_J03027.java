/*
Cho một xâu S. Mỗi bước, bạn được phép xóa đi 2 kí tự liền nhau mà giống nhau. 
Chẳng hạn xâu “aabcc” có thể trở thành “bcc” hoặc “aab” sau 1 lần xóa.
Hỏi xâu cuối cùng thu được là gì? Nếu xâu rỗng, in ra “Empty String”.
 */

import java.util.*;

public class S060_J03027 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine().trim();
        Stack<Character> st = new Stack<>();

        for (char c : s.toCharArray()) {
            if (!st.isEmpty() && st.peek() == c) {
                st.pop();
            } else {
                st.push(c);
            }
        }

        if (st.isEmpty()) {
            System.out.println("Empty String");
        } else {
            StringBuilder result = new StringBuilder();
            for (char c : st) result.append(c);
            System.out.println(result.toString());
        }
        sc.close();
    }
}
