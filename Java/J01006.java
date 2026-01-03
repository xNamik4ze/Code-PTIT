/*
Dãy số Fibonacci được định nghĩa theo công thức như sau:
F1 = 1
F2 = 1
Fn = Fn-1 + Fn-2 với n>2
Viết chương trình tính số Fibonacci thứ n (với n không quá 92)
 */

import java.util.Scanner;

public class S009_J01006 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            long f1 = 1;
            long f2 = 1;
            if (n == 1 || n == 2) {
                System.out.println(1);
            } else {
                long f3 = 0;
                for (int j = 3; j <= n; j++) {
                    f3 = f1 + f2;
                    f1 = f2;
                    f2 = f3;
                }
                System.out.println(f3);
            }
        }
        sc.close();
    }
}
