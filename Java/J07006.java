/*
Cho file nhị phân DATA.in có một ArrayList<Integer>, giá trị các số đều lớn hơn hoặc bằng 0 và nhỏ hơn 1000. Có không quá 106 số trong danh sách. 
Hãy liệt kê các số khác nhau xuất hiện trong file và số lần xuất hiện của từng số đó.
 */

import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;

public class J07006 {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<Integer> arr = (ArrayList<Integer>) ois.readObject();
        ois.close();

        int[] freq = new int[1000];
        for (Integer i : arr) freq[i]++;

        for (int i = 0; i < 1000; i++) {
            if (freq[i] > 0) System.out.println(i + " " + freq[i]);
        }
    }
}
