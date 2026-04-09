/*
Trường phổ thông XYZ tính lương giáo viên theo quy tắc sau:
Mỗi giáo viên có mã ngạch gồm 4 ký tự trong đó
2 ký tự đầu là chức vụ (HT: Giáo viên kiêm nhiệm Hiệu trưởng, HP: Giáo viên kiêm nhiệm Hiệu phó, GV: Giáo viên thường)
2 ký tự số cuối cùng cho biết hệ số bậc lương (không quá 20)
Lương cơ bản của mỗi giáo viên cũng có thể khác nhau
Phụ cấp quy định như sau
HT: 2.000.000
HP: 900.000
GV: 500.000
Thu nhập được tính bằng lương cơ bản nhân với hệ số bậc lương và cộng thêm phụ cấp.
Hãy tính lương cho 1 giáo viên theo quy tắc trên.
*/

import java.util.Scanner;

class Teacher {
    private String id, name;
    private int salary;

    public Teacher(String id, String name, int salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }

    public void display() {
        String rank = id.substring(0, 2);
        int level = Integer.parseInt(id.substring(2));
        int advance = 0;
        if (rank.equals("HT")) advance = 2000000;
        else if (rank.equals("HP")) advance = 900000;
        else advance = 500000;
        long income = (long)salary * level + advance;
        System.out.println(id + " " + name + " " + level + " " + advance + " " + income);
    }
}

public class S074_J04015 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String id = sc.nextLine().trim();
        String name = sc.nextLine().trim();
        int baseSalary = Integer.parseInt(sc.nextLine().trim());
        Teacher t = new Teacher(id, name, baseSalary);
        t.display();
        sc.close();
    }
}