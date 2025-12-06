/*
Cho dãy số A có n phần tử chỉ bao gồm các số nguyên dương (không quá 105). 
Hãy đếm xem mỗi số xuất hiện bao nhiêu lần.
 */

import java.util.*;

public class S029_J02007 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int j = 1; j <= t; j++) {
            int n = sc.nextInt();
            Map<Integer, Integer> freq = new LinkedHashMap<>();
            for (int i = 0; i < n; i++) {
                int x = sc.nextInt();
                freq.put(x, freq.getOrDefault(x, 0) + 1);
            }
            System.out.println("Test " + j + ":");
            for (Map.Entry<Integer, Integer> entry : freq.entrySet()) {
                System.out.println(entry.getKey() + " xuat hien " + entry.getValue() + " lan");
            }
        }
        sc.close();
    }
}