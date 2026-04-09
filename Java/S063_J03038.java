/*
Cho một xâu ký tự S chỉ có các chữ cái Tiếng Anh viết thường. 
Hãy đếm xem có bao nhiêu ký tự chữ cái khác nhau trong S.
 */

import java.util.*;

public class S063_J03038 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        List<Character> list = new ArrayList<>();
        for (int i = 0; i < s.length(); i++) {
            if (!list.contains(s.charAt(i))) list.add(s.charAt(i));
        }
        System.out.println(list.size());
        sc.close();
    }
}
