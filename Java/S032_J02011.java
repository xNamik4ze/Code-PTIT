/*
Hãy thực hiện thuật toán sắp xếp chọn trên dãy N số nguyên. Ghi ra các bước thực hiện thuật toán.
 */

import java.util.Scanner;

public class S032_J02011 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int[] arr = new int[t];
        for (int i = 0; i < t; i++) {
            arr[i] = sc.nextInt();
        }
        int step = 1;
        for (int i = 0; i < t - 1; i++) {
            int min = i;
            for (int j = i + 1; j < t; j++) {
                if (arr[j]  < arr[min]) min = j;
            }
            if (min != i) {
                int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
                System.out.print("Buoc " + step + ": ");
                for (int k = 0; k < t; k++) {
                    System.out.print(arr[k]);
                    if (k < t - 1) System.out.print(" ");
                }
                System.out.println();
                step++;
            }
        }
        sc.close();
    }
}