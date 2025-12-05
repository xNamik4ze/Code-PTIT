/*
Cho 2 hình chữ nhật trên mặt phẳng Oxy.
 Cần tìm hình vuông có kích thước nhỏ nhất sao cho phủ kín được 2 hình chữ nhật đã cho.
 */

import java.util.*;

public class S024_J01025 {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] a = new int[4];
        int[] b = new int[4];
        for (int i = 0; i < 4; i++) a[i] = sc.nextInt();
        for (int i = 0; i < 4; i++) b[i] = sc.nextInt();
        int minX = Math.min(a[0], b[0]);
        int maxX = Math.max(a[2], b[2]);
        int minY = Math.min(a[1], b[1]);
        int maxY = Math.max(a[3], b[3]);
        int side = Math.max(maxX-minX, maxY-minY);
        System.out.println(side * side);
        sc.close();
    }
}