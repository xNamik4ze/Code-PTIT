/*
Một nhân viên làm việc trong công ty được lưu lại các thông tin sau:
Mã nhân viên: được gán giá trị là 00001
Họ tên: Xâu ký tự không quá 40 chữ cái.
Giới tính: Nam hoặc Nu
Ngày sinh: đúng theo chuẩn dd/mm/yyyy
Địa chỉ: Xâu ký tự không quá 100 chữ cái
Mã số thuế: Dãy số có đúng 10 chữ số
Ngày ký hợp đồng: đúng theo chuẩn dd/mm/yyyy
Viết chương trình nhập một nhân viên (không nhập mã) in ra màn hình thông tin của nhân viên đó.
 */

import java.util.Scanner;

class NhanVien {
    private String id, name, sex, dob, adress, taxId, contract;

    public NhanVien() {
        this.id  = "00001";
    }

    public void input(Scanner sc) {
        this.name = sc.nextLine();
        this.sex = sc.nextLine();
        this.dob = sc.nextLine();
        this.adress = sc.nextLine();
        this.taxId = sc.nextLine();
        this.contract = sc.nextLine();
    }

    public void display() {
        System.out.printf("%s %s %s %s %s %s %s \n", id, name, sex, dob, adress, taxId, contract);
    }
}

public class S072_J04007 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        NhanVien nv = new NhanVien();

        nv.input(sc);
        nv.display();
        sc.close();
    }
}
