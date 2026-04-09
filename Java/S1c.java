import java.util.*;

public class S1c {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        double[] arr = new double[n];
        double min = 11;
        double max = -1;
        for (int  i = 0; i < n; i ++) {
            arr[i] = sc.nextDouble();
            if (arr[i] > max) max = arr[i];
            if (arr[i] < min) min = arr[i];
        }

        double sum = 0;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] != min && arr[i] != max) {
                sum += arr[i];
                count++;
            }
        }

        double res = sum / count;
        System.out.printf("%.2f", res);
        sc.close();
    }
}
