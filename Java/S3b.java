import java.util.*;
import java.io.*;

class SinhVien implements Comparable<SinhVien> {
    private String name;
    private int correct;
    private long submit;

    public SinhVien(String name, int correct, long submit) {
        this.name = name;
        this.correct = correct;
        this.submit = submit;
    }

    @Override
    public int compareTo(SinhVien other) {
        if (this.correct != other.correct) {
            return (other.correct - this.correct);
        }
        if (this.submit != other.submit) {
            return Long.compare(this.submit, other.submit);
        }
        return this.name.compareTo(other.name);
    }

    @Override
    public String toString() {
        return name + " " + correct + " " + submit;
    }
}

public class S3b {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("LUYENTAP.in"));
        int n = Integer.parseInt(sc.nextLine());
        List<SinhVien> lis = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            String name = sc.nextLine();
            int correct = sc.nextInt();
            long submit = sc.nextLong();
            sc.nextLine();
            lis.add(new SinhVien(name, correct, submit));
        }
        Collections.sort(lis);    
        for (SinhVien s : lis) {
            System.out.println(s);
        }
        sc.close();
    }
}
