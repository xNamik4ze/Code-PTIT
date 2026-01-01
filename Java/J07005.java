/*
Cho file nhị phân DATA.IN có đúng 100000 số nguyên dương, giá trị các số nhỏ hơn 1000.
Hãy liệt kê các số khác nhau xuất hiện trong file và số lần xuất hiện của từng số đó.
*/

import java.io.*;

public class J07005 {
    public static void main(String[] args) throws FileNotFoundException, IOException {
        DataInputStream dis = new DataInputStream(new FileInputStream("DATA.in"));
        int lis[] = new int[1000];
        for (int i = 0; i < 100000; i++) {
            lis[dis.readInt()]++;
        }
        dis.close();;

        for (int i = 0; i < 1000; i++) {
            if (lis[i] > 0) System.out.println(i + " " + lis[i]);
        }
    }
}
