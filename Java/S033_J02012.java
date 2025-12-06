/*
Hãy thực hiện thuật toán sắp xếp chèn trên dãy N số nguyên. Ghi ra các bước thực hiện thuật toán.
 */

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class S033_J02012 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int[] tempArr = new int[t];
        for (int i = 0; i < t; i++) {
            tempArr[i] = sc.nextInt();
        }
        List<Integer> list = new ArrayList<>();
        int step = 0;

        for (int i = 0; i < t; i++) {
            if (list.isEmpty()) {
                list.add(tempArr[i]);
            } else {
                boolean inserted = false;
                for (int j = 0; j < list.size(); j++) {
                    if (tempArr[i] < list.get(j)) {
                        list.add(j, tempArr[i]);
                        inserted = true;
                        break;
                    }
                }
                if (!inserted) {
                    list.add(tempArr[i]);
                }
            }

            System.out.print("Buoc " + step + ": ");
            for (int k = 0; k < list.size(); k++) {
                System.out.print(list.get(k));
                if (k < list.size() - 1) System.out.print(" ");
            }
            System.out.println();
            step++;
        }

        sc.close();
    }
}
