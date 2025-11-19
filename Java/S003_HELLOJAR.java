/*
Học phí của Học viện được thu theo quy định và thay đổi theo từng thời điểm.
Hãy tính học phí của một sinh viên dựa vào dữ liệu đăng ký học và quy định thu học phí.
Dữ liệu vào cho thông tin về Mã sinh viên, Họ tên, số môn học, mã môn học, tên môn học, số tín chỉ, Số QĐ, Tên QĐ, Đơn giá thu học phí.
Nhiệm vụ của bạn là tính toán và in ra thông tin tiền học phí phải đóng như định dạng mẫu.
 */

import java.util.*;

class Student {
    String id, name;
    Student(String id, String name) {
        this.id = id; this.name = name;
    }
}

class Subject {
    String code, name; int counts;
    Subject(String code, String name, int counts) {
        this.code = code; this.name = name; this.counts = counts;
    }
}

class Rule {
    String ruid, runame; double price;
    Rule(String ruid, String runame, double price) {
        this.ruid = ruid; this.runame = runame; this.price = price;
    }
}

class Invoice {
    Student student;
    List<Subject> subjects;
    Rule rule;
    Invoice(Student student, List<Subject> subjects, Rule rule) {
        this.student = student; this.subjects = subjects; this.rule = rule;
    }
    double getPrice() {
        int total = 0;
        for (Subject s : subjects) {
            total += s.counts;
        }
        return total * rule.price;
    }
}

class InvoiceView {
    static void show(Invoice invoice) {
        System.out.println("Mã sinh viên: " + invoice.student.id);
        System.out.println("Họ tên: " + invoice.student.name);
        System.out.println("Các môn học:");
        for (Subject s : invoice.subjects) {
            System.out.println(s.name);
        }
        System.out.println("Học phí phải nộp là: " + invoice.getPrice());
        System.out.println("Theo QĐ: " + invoice.rule.ruid);
    }
}

class PaymentController {
    public Invoice getInvoice() {
        Scanner sc = new Scanner(System.in);
        String studentId = sc.nextLine();
        String studentName = sc.nextLine();
        int n = sc.nextInt();
        sc.nextLine();
        List<Subject> subjects = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            String code = sc.nextLine();
            String name = sc.nextLine();
            int counts = sc.nextInt();
            sc.nextLine();
            subjects.add(new Subject(code, name, counts));
        }
        String ruleId = sc.nextLine();
        String ruleName = sc.nextLine();
        double price = sc.nextDouble();
        sc.nextLine();
        sc.close();
        return new Invoice(new Student(studentId, studentName), subjects, new Rule(ruleId, ruleName, price));
    }
}

public class S003_HELLOJAR {
    public static void main(String[] args) {
        PaymentController pc = new PaymentController();
        Invoice invoice = pc.getInvoice();
        InvoiceView.show(invoice);
    }
}