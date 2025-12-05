/*
Một số được gọi là “tam phân” nếu chỉ có các chữ số 0,1,2. 
Nhập vào một số nguyên dương không quá 9 chữ số, hãy kiểm tra xem đó có phải số tam phân hay không.
 Dòng đầu là số bộ test, mỗi dòng tiếp theo ghi một số cần kiểm tra. 
Nếu đúng in ra YES, nếu sai in ra NO. 
 */

import java.util.Scanner;

public class S023_J01024 {
    public static boolean isValid(long n) {
        String N = String.valueOf(n);
        for (int i = 0; i < N.length(); i++) {
            int x = N.charAt(i) - '0';
            if (x != 0 && x != 1 && x != 2) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            long n = sc.nextLong();
            if (isValid(n)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        sc.close();
    }
}