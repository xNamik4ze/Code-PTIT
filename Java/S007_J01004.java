/*
Viết chương trình kiểm tra một số nguyên dương có phải số nguyên tố hay không.
Dòng đầu của dữ liệu vào ghi số bộ test. Mỗi dòng tiếp theo có một nguyên dương không quá 9 chữ số.
Kết quả in ra YES nếu đó là số nguyên tố, in ra NO nếu ngược lại.
 */

import java.util.Scanner;

public class S007_J01004 {
    public static boolean isPrime(long n) {
        if (n < 2) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;
        for (long i = 3; i * i <= n; i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }
    public static void main (String[] args) {
        Scanner sc =  new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            long n = sc.nextLong();
            if (isPrime(n)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        sc.close();
    }
}

