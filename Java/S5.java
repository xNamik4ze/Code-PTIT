import java.util.*;

class PhongBan {
    String ma, ten;
    PhongBan(String ma, String ten) {
        this.ma = ma;
        this.ten = ten;
    }
}

class NhanVien {
    String ma, ten, maPhong;
    long luongCoBan;
    int soNgayCong;
    long luongThang;
    String tenPhong;

    NhanVien(String ma, String ten, long luongCoBan, int soNgayCong, Map<String, String> phong) {
        this.ma = ma;
        this.ten = ten;
        this.luongCoBan = luongCoBan;
        this.soNgayCong = soNgayCong;
        char nhom = ma.charAt(0);
        int nam = Integer.parseInt(ma.substring(1, 3));
        maPhong = ma.substring(3);
        tenPhong = phong.get(maPhong);
        int heSo = getHeSo(nhom, nam);
        luongThang = luongCoBan * soNgayCong * heSo * 1000;
    }

    private int getHeSo(char nhom, int nam) {
        if (nhom == 'A') {
            if (nam <= 3) return 10;
            else if (nam <= 8) return 12;
            else if (nam <= 15) return 14;
            else return 20;
        } else if (nhom == 'B') {
            if (nam <= 3) return 10;
            else if (nam <= 8) return 11;
            else if (nam <= 15) return 13;
            else return 16;
        } else if (nhom == 'C') {
            if (nam <= 3) return 9;
            else if (nam <= 8) return 10;
            else if (nam <= 15) return 12;
            else return 14;
        } else {
            if (nam <= 3) return 8;
            else if (nam <= 8) return 9;
            else if (nam <= 15) return 11;
            else return 13;
        }
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + tenPhong + " " + luongThang;
    }
}

public class S5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int nPhong = Integer.parseInt(sc.nextLine());
        Map<String, String> phong = new HashMap<>();
        for (int i = 0; i < nPhong; i++) {
            String[] parts = sc.nextLine().trim().split("\\s+", 2);
            phong.put(parts[0], parts[1]);
        }
        int nNV = Integer.parseInt(sc.nextLine());
        List<NhanVien> list = new ArrayList<>();
        for (int i = 0; i < nNV; i++) {
            String ma = sc.nextLine().trim();
            String ten = sc.nextLine().trim();
            long luongCoBan = Long.parseLong(sc.nextLine().trim());
            int soNgayCong = Integer.parseInt(sc.nextLine().trim());
            list.add(new NhanVien(ma, ten, luongCoBan, soNgayCong, phong));
        }
        for (NhanVien nv : list) {
            System.out.println(nv);
        }
        sc.close();
    }
}
