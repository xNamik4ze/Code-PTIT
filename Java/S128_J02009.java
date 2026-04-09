/*
Tại sân bay, mọi người đang làm thủ tục để check in. Có tất cả N vị khách. 
Vị khách thứ i tới làm thủ tục tại thời điểm T[i] và cần D[i] thời gian để check-in xong.
Các bạn hãy xác định xem thời điểm nào tất cả các vị khách làm xong thủ tục để lên máy bay?
 */

import java.util.*;

class Customer {
    int arrival, duration;
    Customer(int arrival, int duration) {
        this.arrival = arrival;
        this.duration = duration;
    }
}

public class S128_J02009 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Customer[] a = new Customer[n];
        for (int i = 0; i < n; i++) {
            int arrival = sc.nextInt();
            int duration = sc.nextInt();
            a[i] = new Customer(arrival, duration);
        }
        Arrays.sort(a, Comparator.comparingInt(k -> k.arrival));
        long finish = 0;
        for (Customer k : a) {
            if (k.arrival > finish) finish = k.arrival;
            finish += k.duration;
        }
        System.out.println(finish);
        sc.close();
    }
}
