/*
Cho dãy A[] chỉ bao gồm các số nguyên dương không quá 105 nhưng không biết trước số phần tử của dãy. 
Người ta gọi dãy A[] là dãy ưu thế nếu thỏa mãn 1 trong 2 điều kiện sau đây:
Dãy gọi là ưu thế chẵn nếu số phần tử của dãy là chẵn và số lượng số chẵn trong dãy nhiều hơn số lượng số lẻ.
Dãy gọi là ưu thế lẻ nếu số phần tử của dãy là lẻ và số lượng số lẻ trong dãy nhiều hơn số lượng số chẵn.
 */

import java.util.*;

public class S139_J02037  {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            String[] tokens = sc.nextLine().trim().split("\\s+");
            int even = 0, odd = 0;

            for (String s : tokens) {
                int x = Integer.parseInt(s);
                if (x % 2 == 0) even++;
                else odd++;
            }

            int n = even + odd;
            if ((n % 2 == 0 && even > odd) || (n % 2 == 1 && odd > even)) System.out.println("YES");
            else System.out.println("NO");
        }
        sc.close();
    }
}
