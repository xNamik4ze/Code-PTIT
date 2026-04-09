/*
Viết chương trình khai báo lớp Sinh Viên gồm các thông tin: Mã SV, Họ tên, Lớp, Ngày sinh và Điểm GPA (dạng số thực float). 
Hàm khởi tạo không có tham số, gán các giá trị thuộc tính ở trạng thái mặc định (xâu ký tự rỗng, giá trị số bằng 0).
Đọc thông tin 1 sinh viên từ bàn phím (không có mã sinh viên) và in ra màn hình. 
Trong đó Mã SV được gán là B20DCCN001. Ngày sinh được chuẩn hóa về dạng dd/mm/yyyy.
 */

import java.util.Scanner;

class SinhVien {
    private String name, id, dob;
    private float gpa;

    public SinhVien (String name, String id, String dob, float gpa) {
        this.name = name;
        this.id = id;
        this.dob = dob;
        this.gpa = gpa;
    }

    public String dobNew() {
        String[] parts = dob.split("/");
        for (int i = 0; i < parts.length - 1; i++) {
            if (parts[i].length() < 2) {
                parts[i] = "0" + parts[i];
            }
        }
        return String.join("/", parts);
    }

    public void display() {
        System.out.printf("%s %s %s %s %.2f\n", "B20DCCN001", name, id, dobNew(), gpa);
    }   
}

public class S071_J04006 {
    public static void main(String[] args) {        
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        String id = sc.nextLine();
        String dob = sc.nextLine();
        Float gpa = sc.nextFloat();

        SinhVien sv = new SinhVien(name, id, dob, gpa);
        sv.display();
        sc.close();
    }
}
