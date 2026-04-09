import java.util.*;

public class S3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String ma = sc.nextLine().trim();
        String ten = sc.nextLine().trim();
        double toan = Double.parseDouble(sc.nextLine());
        double ly = Double.parseDouble(sc.nextLine());
        double hoa = Double.parseDouble(sc.nextLine());
        sc.close();

        String kv = ma.substring(0, 3);
        double uuTien = 0;
        if (kv.equals("KV1")) uuTien = 0.5;
        else if (kv.equals("KV2")) uuTien = 1.0;
        else if (kv.equals("KV3")) uuTien = 2.5;

        double tong = toan * 2 + ly + hoa;
        double tongSauUuTien = tong + uuTien;
        String trangThai = (tongSauUuTien >= 24) ? "TRUNG TUYEN" : "TRUOT";

        if (uuTien == (int) uuTien && tong == (int) tong)
            System.out.printf("%s %s %.0f %.0f %s\n", ma, ten, uuTien, tong, trangThai);
        else if (uuTien == (int) uuTien)
            System.out.printf("%s %s %.0f %.1f %s\n", ma, ten, uuTien, tong, trangThai);
        else if (tong == (int) tong)
            System.out.printf("%s %s %.1f %.0f %s\n", ma, ten, uuTien, tong, trangThai);
        else
            System.out.printf("%s %s %.1f %.1f %s\n", ma, ten, uuTien, tong, trangThai);
    }
}
