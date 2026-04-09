/*
Cho dãy số A[] gồm có N phần tử. Một bộ 3 số (a, b, c) được gọi là bộ ba số Pytago nếu như a^2 + b^2 = c^2.
Nhiệm vụ của bạn là kiểm tra xem có tồn tại bộ ba số Pytago trong dãy số A[] hay không?
 */

import java.util.*;

public class S129_J02016 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            long[] list = new long[n];

            for (int i = 0; i < n; i++) {
                long x = sc.nextLong();
                list[i] = x * x;
            }

            Arrays.sort(list);
            boolean found = false;

            for (int i = n - 1; i > 1 && !found; i--) {
                int l = 0, r = i - 1;
                while (l < r) {
                    if (list[l] + list[r] == list[i]) {
                        found = true;
                        break;
                    }
                    if (list[l] + list[r] < list[i]) l++;
                    else r--;
                }
            }
            System.out.println(found ? "YES" : "NO");
        }
        sc.close();
    }
}