/*
Cho một tam giác cân có độ dài đáy bằng 1 và chiều cao bằng H. 
Bạn cần chia tam giác này thành N phần có diện tích bằng nhau và song song với đáy.
Hãy in ra N-1 số là khoảng cách từ lát cắt thứ i tới đỉnh của tam giác.
 */

import java.util.Scanner;

public class S008_J01005 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int N = sc.nextInt();
            int H = sc.nextInt();
            for (int i = 1; i < N; i++) {
                double result = H * Math.sqrt((double)i / N);
                System.out.printf("%.6f ", result);
            }
            System.out.println();
        }
        sc.close();
    }
}
