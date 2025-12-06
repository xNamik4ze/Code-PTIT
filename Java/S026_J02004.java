/*
Nhập một dãy số nguyên có n phần tử (n không quá 100, các phần tử trong dãy không quá 109).
Hãy viết chương trình kiểm tra xem dãy có phải đối xứng hay không.
Nếu đúng in ra YES, nếu sai in ra NO.
 */

import java.util.Scanner;

public class S026_J02004 {
    public static boolean isPalindrome(int[] arr, int n) {
        for (int i = 0; i < n / 2; i++) {
            if (arr[i] != arr[n - 1 - i]) return false;
        }
        return true;
    }
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int[] arr = new int[n];
            for (int j = 0; j < n; j++) {
                arr[j] = sc.nextInt();
            }
            if (isPalindrome(arr, n)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        sc.close();
    }    
}
