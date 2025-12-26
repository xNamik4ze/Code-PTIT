/*
Cho file nhị phân SONGUYEN.in trong đó ghi một ArrayList<Integer> theo kiểu object. Các giá trị đều nguyên dương và nhỏ hơn 10000.
Hãy viết chương trình trình liệt kê các số nguyên tố khác nhau xuất hiện trong file theo thứ tự tăng dần và số lần xuất hiện của các số đó
 */

import java.io.*;
import java.util.*;

public class S087_J07015 {
    public static void main(String[] args) throws IOException, ClassNotFoundException{
        boolean[] isPrime = new boolean[10001];
        Arrays.fill(isPrime, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i * i <= 10000; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= 10000; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("SONGUYEN.in"));
        ArrayList<Integer> arr = (ArrayList<Integer>) ois.readObject();
        ois.close();

        int[] freq = new int[10001];
        for (Integer i : arr) {
            if(isPrime[i]) freq[i]++;
        }
        
        for ( int i = 2; i < 10000; i++) {
            if (freq[i] > 0) System.out.println(i + " " + freq[i]);
        }
    }
}
