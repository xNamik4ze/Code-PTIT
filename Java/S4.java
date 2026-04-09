import java.util.*;
import java.text.*;

class KhachHang {
    String maKH;
    String ten;
    String soPhong;
    int soNgayO;
    long thanhTien;

    KhachHang(String maKH, String ten, String soPhong, String ngayNhan, String ngayTra, long phiDichVu) throws Exception {
        this.maKH = maKH;
        this.ten = ten.trim().replaceAll("\\s+", " ");
        this.soPhong = soPhong.trim();

        SimpleDateFormat df = new SimpleDateFormat("dd/MM/yyyy");
        Date d1 = df.parse(ngayNhan);
        Date d2 = df.parse(ngayTra);
        long diff = (d2.getTime() - d1.getTime()) / (1000 * 60 * 60 * 24) + 1;
        this.soNgayO = (int) diff;

        int tang = Character.getNumericValue(soPhong.charAt(0));
        long donGia = 0;
        if (tang == 1) donGia = 25;
        else if (tang == 2) donGia = 34;
        else if (tang == 3) donGia = 50;
        else if (tang == 4) donGia = 80;

        this.thanhTien = donGia * soNgayO + phiDichVu;
    }

    @Override
    public String toString() {
        return maKH + " " + ten + " " + soPhong + " " + soNgayO + " " + thanhTien;
    }
}

public class S4 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        ArrayList<KhachHang> ds = new ArrayList<>();

        for (int i = 1; i <= n; i++) {
            String ten = sc.nextLine();
            String soPhong = sc.nextLine();
            String ngayNhan = sc.nextLine();
            String ngayTra = sc.nextLine();
            long phi = Long.parseLong(sc.nextLine());
            String ma = String.format("KH%02d", i);
            ds.add(new KhachHang(ma, ten, soPhong, ngayNhan, ngayTra, phi));
        }

        ds.sort((a, b) -> Long.compare(b.thanhTien, a.thanhTien));

        for (KhachHang kh : ds) {
            System.out.println(kh);
        }
        sc.close();
    }
}
