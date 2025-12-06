/*
Cho dãy số A[] chỉ bao gồm các số nguyên dương.
Người ta thu gọn dần dãy số bằng cách loại bỏ các cặp phần tử kề nhau mà có tổng là chẵn. 
Sau khi cặp phần tử đó bị loại ra thì dãy số được dồn lại. Cứ tiếp tục như vậy cho đến khi không còn cặp phần tử nào kề nhau có tổng chẵn nữa.
Hãy tính xem cuối cùng dãy A[] còn bao nhiêu phần tử.
 */

import java.util.*;

public class S036_J02017 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int[] arr = new int[t];
        for (int i = 0; i < t; i++) {
            arr[i] = sc.nextInt();
        }

        Stack<Integer> st = new Stack<>();
        for (int i : arr) {
            if (!st.isEmpty() && (st.peek() + i) % 2 == 0) {
                st.pop();
            } else {
                st.push(i);
            }
        }
        System.out.println(st.size());
        sc.close();
    }
}