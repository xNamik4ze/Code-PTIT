/*
Cho dãy số có N số nguyên dương khác nhau đã được sắp xếp tăng dần. 
Hãy liệt kê các số còn thiếu để có đủ các số trong khoảng từ 1 đến số lớn nhất trong dãy ban đầu. 
 */

import java.util.*;

public class J02034 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Set<Integer> set = new LinkedHashSet<>();
        int max = 0;
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            set.add(x);
            if (x > max) max = x;
        }
        
        boolean missing = false;
        for (int i = 1; i <= max; i++) {
            if (!set.contains(i)) {
                System.out.println(i);
                missing = true;
            }
        }
        if (!missing) {
            System.out.println("Excellent!");
        }
        sc.close();
    }
}