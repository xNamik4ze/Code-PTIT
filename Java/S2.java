import java.util.*;

class GiangVien {
    String maGV;
    String hoTen;
    String boMon;

    GiangVien(String maGV, String hoTen, String boMon) {
        this.maGV = maGV;
        this.hoTen = hoTen;
        this.boMon = boMon;
    }

    String getTen() {
        String[] parts = hoTen.trim().split("\\s+");
        return parts[parts.length - 1];
    }

    String vietTatBoMon() {
        String[] parts = boMon.trim().split("\\s+");
        StringBuilder sb = new StringBuilder();
        for (String p : parts) {
            sb.append(Character.toUpperCase(p.charAt(0)));
        }
        return sb.toString();
    }

    @Override
    public String toString() {
        return maGV + " " + hoTen + " " + vietTatBoMon();
    }
}

public class S2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        ArrayList<GiangVien> ds = new ArrayList<>();

        for (int i = 1; i <= n; i++) {
            String hoTen = sc.nextLine().trim();
            String boMon = sc.nextLine().trim();
            String maGV = String.format("GV%02d", i);
            ds.add(new GiangVien(maGV, hoTen, boMon));
        }

        Collections.sort(ds, new Comparator<GiangVien>() {
            @Override
            public int compare(GiangVien a, GiangVien b) {
                int cmp = a.getTen().compareToIgnoreCase(b.getTen());
                if (cmp == 0)
                    return a.maGV.compareTo(b.maGV);
                return cmp;
            }
        });

        for (GiangVien gv : ds) {
            System.out.println(gv);
        }
        sc.close();
    }
}
