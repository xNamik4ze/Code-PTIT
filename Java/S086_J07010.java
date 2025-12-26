/* 
Khai báo lớp Sinh Viên gồm các thông tin: Mã SV, Họ tên, Ngày sinh, Lớp và Điểm GPA (dạng số thực). 
Đọc thông tin N sinh viên từ file văn bản SV.in (không có mã sinh viên) và in ra lần lượt màn hình mỗi dòng 1 sinh viên theo đúng thứ tự ban đầu. 
Trong đó Mã SV được tự tạo ra theo quy tắc thêm mã B20DCCN sau đó là giá trị nguyên tự động tăng tính từ 001 (tối đa là 099). 
Ngày sinh được chuẩn hóa về dạng dd/mm/yyyy
*/

import java.io.*;
import java.text.DecimalFormat;
import java.util.*;

class SinhVien {
    private static int count = 1;
    private String maSV, ten, lop, dob;
    private double gpa;

    public SinhVien(String ten, String lop, String dob, double gpa) {
        this.maSV = String.format("B20DCCN%03d", count++);
        this.ten = ten;
        this.lop = lop;
        this.dob = reDo(dob);
        this.gpa = gpa;
    }

    private String reDo(String dob) {
        String[] parts = dob.split("/");
        String dd = parts[0].length() == 1 ? "0" + parts[0] : parts[0];
        String mm = parts[1].length() == 1 ? "0" + parts[1] : parts[1];
        String yyyy = parts[2];
        return dd + "/" + mm + "/" + yyyy;
    }

    @Override
    public String toString() {
        DecimalFormat df = new DecimalFormat("0.00");
        return maSV + " " + ten + ' ' + lop + ' ' + dob + ' ' + df.format(gpa);
    }
}

public class S086_J07010 {
    public static void main(String[] args) throws IOException {
        List<SinhVien> lis = new ArrayList<>();

        BufferedReader br = new BufferedReader(new FileReader("SV.in"));
        int t = Integer.parseInt(br.readLine());
        while(t-- > 0) {
            String ten = br.readLine();
            String lop = br.readLine();
            String dob = br.readLine();
            double gpa = Double.parseDouble(br.readLine());
            SinhVien sv = new SinhVien(ten, lop, dob, gpa);
            lis.add(sv);
        }
        br.close();

        for (SinhVien sv : lis) {
            System.out.println(sv);
        }
    }
}
