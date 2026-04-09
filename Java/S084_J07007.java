/*
Cho file văn bản VANBAN.in.
Một từ được định nghĩa là một dãy ký tự liên tiếp không có khoảng trống, dấu tab hay dấu xuống dòng. 
Tạm thời chưa xét đến các dấu câu trong bải toán này.
Hãy chuyển tất cả các từ về dạng chữ thường sau đó liệt kê các từ khác nhau xuất hiện trong file VANBAN.in theo thứ tự từ điển.
 */

import java.io.BufferedReader;
import java.io.FileReader;
import java.util.TreeSet;

public class S084_J07007 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new FileReader("VANBAN.in"));
        TreeSet<String> set = new TreeSet<>();
        String str;

        while((str = br.readLine()) != null) {
            String[] words = str.toLowerCase().split("\\s+");
            for (String w : words) if (!w.isEmpty()) set.add(w);
        }

        for (String s : set) System.out.println(s);
        br.close();
    }
}
