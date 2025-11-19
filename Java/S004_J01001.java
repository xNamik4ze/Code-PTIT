/*
Cho độ dài hai cạnh của hình chữ nhật. Giá trị không quá 104.
Viết chương trình tính chu vi và diện tích của hình chữ nhật đó. Nếu dữ liệu không hợp lệ (chiều dài hoặc chiều rộng ≤ 0 thì in ra số 0)
 */

import java.util.Scanner;

public class S004_J01001 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        if (a <= 0 || b <= 0) {
            System.out.println(0);
        } else {
            int cv = (a + b) * 2;
            int dt= a * b;
            System.out.println(cv + " " + dt);
        }
        sc.close();
    }
}