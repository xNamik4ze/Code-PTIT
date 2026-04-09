/*
Viết chương trình khai báo lớp Thí Sinh gồm các thông tin: Họ tên, Ngày sinh, Điểm môn 1, Điểm môn 2, Điểm môn 3 và Tổng điểm.
Đọc thông tin 1 thí sinh từ bàn phím và in ra màn hình 3 thông tin: Họ tên, Ngày sinh, Tổng điểm.
 */

import java.util.Scanner;

class ThiSinh {
    private String hoTen, ngaySinh;
    private double diem1, diem2, diem3;

    public ThiSinh (String hoTen, String ngaySinh, double diem1, double diem2, double diem3) {
        this.hoTen = hoTen;
        this.ngaySinh = ngaySinh;
        this.diem1 = diem1;
        this.diem2 = diem2;
        this.diem3 = diem3;
    }

    public double tongDiem() {
        return diem1 + diem2 + diem3;
    }

    public void inThongTin() {
        System.out.printf("%s %s %.1f\n", hoTen, ngaySinh, tongDiem());
    }
}

public class S070_J04005 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        String dob = sc.nextLine();
        double d1 = sc.nextDouble();
        double d2 = sc.nextDouble();
        double d3 = sc.nextDouble();

        ThiSinh ts = new ThiSinh(name, dob, d1, d2, d3);
        ts.inThongTin();
        sc.close();
    }
}
