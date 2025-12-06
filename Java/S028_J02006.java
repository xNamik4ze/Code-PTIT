/*
Cho dãy số a[] có n phần tử và dãy số b[] có m phần tử là các số nguyên dương nhỏ hơn 1000. 
Gọi tập hợp A là tập các số khác nhau trong a[], tập hợp B là tập các số khác nhau trong b[].
Hãy tìm hợp của A và B
 */

import java.util.*;

public class S028_J02006 {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();

        Set<Integer> A = new HashSet <>();
        Set<Integer> B = new HashSet <>();

        for (int i = 0; i < n; i++) {
            A.add(sc.nextInt());
        }
        for (int i = 0; i < m; i++) {
            B.add(sc.nextInt());
        }
        A.addAll(B);
        List<Integer> result = new ArrayList<>(A);
        Collections.sort(result);

        for (int x : result) {
            System.out.print(x + " ");
        }
        sc.close();
    }    
}
