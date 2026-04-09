import java.util.*;
import java.text.DecimalFormat;

class LopHocPhan {
    String maGV, maMon;
    double gioChuan;

    LopHocPhan(String maGV, String maMon, double gioChuan) {
        this.maGV = maGV;
        this.maMon = maMon;
        this.gioChuan = gioChuan;
    }
}

public class S1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int nMon = Integer.parseInt(sc.nextLine());
        LinkedHashMap<String, String> monHoc = new LinkedHashMap<>();

        for (int i = 0; i < nMon; i++) {
            String line = sc.nextLine();
            String[] parts = line.split(" ", 2);
            monHoc.put(parts[0], parts[1]);
        }

        int nGV = Integer.parseInt(sc.nextLine());
        LinkedHashMap<String, String> giangVien = new LinkedHashMap<>();

        for (int i = 0; i < nGV; i++) {
            String line = sc.nextLine();
            String[] parts = line.split(" ", 2);
            giangVien.put(parts[0], parts[1]);
        }

        int nLop = Integer.parseInt(sc.nextLine());
        ArrayList<LopHocPhan> lopHocPhans = new ArrayList<>();

        for (int i = 0; i < nLop; i++) {
            String maGV = sc.next();
            String maMon = sc.next();
            double gio = sc.nextDouble();
            lopHocPhans.add(new LopHocPhan(maGV, maMon, gio));
        }

        String maCanThongKe = sc.next();
        sc.close();

        String tenGV = giangVien.get(maCanThongKe);
        System.out.println("Giang vien: " + tenGV);

        double tong = 0;
        for (LopHocPhan lop : lopHocPhans) {
            if (lop.maGV.equals(maCanThongKe)) {
                System.out.println(monHoc.get(lop.maMon) + " " + lop.gioChuan);
                tong += lop.gioChuan;
            }
        }

        DecimalFormat df = new DecimalFormat("0.00");
        System.out.println("Tong: " + df.format(tong));
    }
}
