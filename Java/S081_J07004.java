/*
Cho file văn bản DATA.in có không quá 100000 số nguyên dương, giá trị các số nhỏ hơn 1000.
Hãy liệt kê các số khác nhau xuất hiện trong file và số lần xuất hiện của từng số đó.
*/

import java.io.File;
import java.util.*;

public class J07004 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File("DATA.in"));

        TreeMap<Integer, Integer> freq = new TreeMap<>();

        while (sc.hasNextInt()) {
            int x = sc.nextInt();
            freq.put(x, freq.getOrDefault(x, 0) + 1);
        }

        for (Map.Entry<Integer, Integer> res : freq.entrySet()) {
            System.out.println(res.getKey() + " " + res.getValue());
        }
        sc.close();
    }
}
