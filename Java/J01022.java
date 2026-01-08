/*
Người ta tạo ra một dãy xâu ký tự nhị phân X[] trong đó:
X[1] = “0”
X[2] = “1”
X[n] = X[n-2] + X[n-1] với n>2
Với phép cộng (+) là phép nối hai xâu với nhau. 
Cho hai số tự nhiên N và K (1<N<93; K đảm bảo trong phạm vi của xâu X[N]).
Hãy xác định ký tự thứ K trong xâu X[N] là ký tự ‘0’ hay ký tự ‘1’.
 */

import java.util.Scanner;

public class J01022 {
    static long[] F = new long[93];

    public static void prepare() {
        F[1] = 1;
        F[2] = 1;
        for (int i = 3; i < 93; i++) {
            F[i] = F[i - 2] + F[i - 1];
        }
    }

    public static char findK(int n, long k) {
        if (n == 1) return '0';
        if (n == 2) return '1';

        if (k <= F[n - 2]) {
            return findK(n - 2, k);
        } 
        else {
            return findK(n - 1, k - F[n - 2]);
        }
    }

    public static void main(String[] args) {
        prepare();
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            long k = sc.nextLong();
            System.out.println(findK(n, k));
        }
        sc.close();
    }
}