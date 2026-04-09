/*
Viết chương trình khai báo lớp Sinh Viên gồm các thông tin: Mã SV, Họ tên, Ngày sinh, Lớp và Điểm GPA (dạng số thực). 
Hàm khởi tạo không có tham số, gán các giá trị thuộc tính ở trạng thái mặc định (xâu ký tự rỗng, giá trị số bằng 0).
Đọc thông tin N sinh viên từ bàn phím (không có mã sinh viên) và in ra lần lượt màn hình mỗi dòng 1 sinh viên theo đúng thứ tự ban đầu. 
Trong đó Mã SV được tự tạo ra theo quy tắc thêm mã B20DCCN sau đó là giá trị nguyên tự động tăng tính từ 001 (tối đa là 099). 
Ngày sinh được chuẩn hóa về dạng dd/mm/yyyy
 */

import java.util.Scanner;

class SinhVien {
    private String id, name, dob, clas;
    private float gpa;
    private static int count = 1;

    public SinhVien() {
        this.id = "";
        this.name = "";
        this.dob = "";
        this.clas = "";
        this.gpa = 0;
    }

    public SinhVien(String name, String clas, String dob, float gpa) {
        this.id = String.format("B20DCCN%03d", count++);
        this.name = name;
        this.dob = dob;
        this.clas = clas;
        this.gpa = gpa;
    }

    public String dobNew() {
        String[] parts = dob.split("/");
        for (int i = 0; i < 2; i++) {
            if (parts[i].length() < 2) {
                parts[i] = "0" + parts[i];
            }
        }
        return String.join("/", parts);
    }

    public void display() {
        System.out.printf("%s %s %s %s %.2f\n", id, name, clas, dobNew(), gpa);
    }
}

public class S161_J05003 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        SinhVien[] list = new SinhVien[t];

        for (int i = 0; i < t; i++) {
            String name = sc.nextLine();
            String clas = sc.nextLine();
            String dob = sc.nextLine();
            float gpa = Float.parseFloat(sc.nextLine());
            list[i] = new SinhVien(name, clas, dob, gpa);
        }

        for (SinhVien sv : list) {
            sv.display();
        }
        sc.close();
    }
}
