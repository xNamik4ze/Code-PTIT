/*
Cho hai xâu ký tự S1 và S2. Hãy viết chương trình tìm các từ chỉ xuất hiện trong S1 mà không xuất hiện trong S2. 
Chú ý: mỗi từ chỉ liệt kê 1 lần.
Dữ liệu vào: Dòng 1 ghi số bộ test. Mỗi bộ test gồm 2 dòng, mỗi dòng ghi một xâu ký tự độ dài không quá 200, chỉ bao gồm các ký tự viết thường và các khoảng trống. 
Kết quả: Với mỗi bộ test ghi ra các từ có trong S1 mà không có trong S2. Các từ được ghi theo thứ tự từ điển.
 */

import java.util.*;

public class S051_J03009 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            String s1 = sc.nextLine();
            String s2 = sc.nextLine();

            Set<String> set1 = new TreeSet<>(Arrays.asList(s1.split(" ")));
            Set<String> set2 = new TreeSet<>(Arrays.asList(s2.split(" ")));

            set1.removeAll(set2);

            System.out.println(String.join(" ", set1));
        }
        sc.close();
    }
}
