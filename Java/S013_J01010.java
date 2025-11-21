/*
Với một vài số nguyên dương có 1 chữ số, khi cắt đôi số đó theo chiều ngang và lấy nửa phía trên thì ta vẫn có một số nguyên. Cụ thể:
Số 0 cắt đôi vẫn ra số 0
Số 1 cắt đôi vẫn ra số 1
Số 8 cắt đôi ra số 0
Số 9 cắt đôi ra số 0
Các số khác cắt đôi sẽ không hợp lệ.
Cho một số nguyên dương không quá 18 chữ số. Hãy in ra kết quả “cắt đôi” của số đó.
Nếu không hợp lệ thì ghi ra INVALID. Chú ý: nếu cắt đôi ra một dãy toàn 0 thì cũng được coi là không hợp lệ. Kết quả cắt đôi thì không tính chữ số 0 ở đầu.
 */

import java.util.Scanner;

public class S013_J01010 {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        for (int j = 0; j < t; j++) {
            String n = sc.next();
            StringBuilder result = new StringBuilder();
            boolean valid = true;
            
            for (int i = 0; i < n.length(); i++) {
                if (n.charAt(i) == '0') {
                    result.append('0');
                } else if (n.charAt(i) == '1') {
                    result.append('1');
                } else if (n.charAt(i) == '8') {
                    result.append('0');
                } else if (n.charAt(i) == '9') {
                    result.append('0');
                } else {
                    valid = false;
                    break;
                }
            }

            String res = result.toString();
            res = res.replaceFirst("^0+", "");
            if (valid == false || res.isEmpty()) {
                System.out.println("INVALID");
            } else {
                System.out.println(res);
            }
        }
        sc.close();
    }
}