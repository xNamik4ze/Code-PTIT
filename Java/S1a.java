import java.io.FileInputStream;
import java.io.ObjectInputStream;
import java.io.*;
import java.util.ArrayList;
import java.util.Arrays;

public class S1a {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        boolean[] isPrime = new boolean[10001];
        Arrays.fill(isPrime, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i * i <= 10000; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= 10000; j += i) isPrime[j] = false;
            }
        }

        ObjectInputStream ois1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream ois2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> ar1 = (ArrayList<Integer>) ois1.readObject();
        ArrayList<Integer> ar2 = (ArrayList<Integer>) ois2.readObject();
        ois1.close();
        ois2.close();

        int[] count1 = new int[10001];
        for (Integer x : ar1) if (isPrime[x]) count1[x]++;
        int[] count2 = new int[10001];
        for (Integer x : ar2) if (isPrime[x]) count2[x]++;

        for (int i = 2; i < 10000; i++) {
            if (count1[i] > 0 && count2[i] > 0) System.out.println(i + " " +  count1[i] + " " + count2[i]);
        }
    }   
}
