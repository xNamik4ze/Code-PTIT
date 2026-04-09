import java.util.*;
import java.io.*;

class SinhVien implements Comparable<SinhVien> {
    private String ma, hoTen, lop, email, sdt, gioiTinh, size;

    public SinhVien(String ma, String hoTen, String lop, String email, String sdt, String gioiTinh) {
        this.ma = ma;
        this.hoTen = hoTen;
        this.lop = lop;
        this.email = email;
        this.sdt = sdt;
        this.gioiTinh = gioiTinh;
    }

    public void setSize(String size) { this.size = size; }
    public String getMa() { return ma; }
    public String getGioiTinh() { return gioiTinh; }
    public String getSize() { return size; }

    @Override
    public int compareTo(SinhVien other) {
        return this.ma.compareTo(other.ma);
    }

    @Override
    public String toString() {
        return ma + " " + hoTen + " " + lop + " " + email + " " + sdt;
    }
}

public class S4a {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scSV = new Scanner(new File("SINHVIEN.in"));
        int n = Integer.parseInt(scSV.nextLine());
        Map<String, SinhVien> map = new HashMap<>();
        List<SinhVien> list = new ArrayList<>();
        
        for (int i = 0; i < n; i++) {
            SinhVien sv = new SinhVien(scSV.nextLine(), scSV.nextLine(), scSV.nextLine(), 
                                       scSV.nextLine(), scSV.nextLine(), scSV.nextLine());
            map.put(sv.getMa(), sv);
            list.add(sv);
        }

        Scanner scDK = new Scanner(new File("DANGKY.in"));
        while (scDK.hasNext()) {
            String ma = scDK.next();
            String size = scDK.next();
            if (map.containsKey(ma)) {
                map.get(ma).setSize(size);
            }
        }

        Collections.sort(list);

        Scanner scTV = new Scanner(new File("TRUYVAN.in"));
        int q = Integer.parseInt(scTV.nextLine());
        while (q-- > 0) {
            String line = scTV.nextLine();
            String[] part = line.split("\\s+");
            String gioiTinhQuery = part[0];
            String sizeQuery = part[1];

            System.out.println("DANH SACH SINH VIEN " + gioiTinhQuery.toUpperCase() + " DANG KY SIZE " + sizeQuery);
            for (SinhVien sv : list) {
                if (sv.getGioiTinh().equalsIgnoreCase(gioiTinhQuery) && sv.getSize().equals(sizeQuery)) {
                    System.out.println(sv);
                }
            }
        }
        scDK.close();
        scSV.close();
        scTV.close();
    }
}