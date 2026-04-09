import java.util.*;
import java.io.*;

public class S1b {
    public static boolean valid(int n) {
        if (n < 10) return false;
        int digit = n % 10;
        n /= 10;
        while (n > 0) {
            int temp = n % 10;
            if (temp > digit) return false;
            digit = temp;
            n /= 10;
        }
        return true;
    }
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        boolean[] isValid = new boolean[100001];
        Arrays.fill(isValid, false);
        for (int i = 0; i <= 100000; i++) {
            if (valid(i)) isValid[i] = true;
        }

        ObjectInputStream ois1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream ois2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> ar1 = (ArrayList<Integer>) ois1.readObject();
        ArrayList<Integer> ar2 = (ArrayList<Integer>) ois2.readObject();
        ois1.close();
        ois2.close();

        int[] count1 = new int[100001];
        for (Integer x : ar1) if (isValid[x]) count1[x]++;
        int[] count2 = new int[100001];
        for (Integer x : ar2) if (isValid[x]) count2[x]++;

        for (int i = 10; i < 100001; i++) {
            if (count1[i] > 0 && count2[i] > 0) System.out.println(i + " " + count1[i] + " " + count2[i]);
        }
    }
}
