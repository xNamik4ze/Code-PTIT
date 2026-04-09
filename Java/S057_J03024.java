/*
Cho một số nguyên dương lớn có nhiều hơn 20 chữ số nhưng không quá 1000 chữ số. 
Một số nguyên dương được coi là “số ưu thế chẵn” nếu số chữ số của nó là chẵn và số chữ số chẵn nhiều hơn số chữ số lẻ.
Một số nguyên dương được coi là “số ưu thế lẻ” nếu số chữ số của nó là lẻ và số chữ số lẻ nhiều hơn số chữ số chẵn.
Hãy kiểm tra xem số đó có phải là số ưu thế (chẵn hoặc lẻ) hay không. 
Chú ý: trường hợp số lượng chữ số chẵn và số lượng chữ số lẻ bằng nhau thì không được coi là số ưu thế.
 */

import java.util.Scanner;

public class S057_J03024 {
    public static boolean isValid(String s) {
        if (s.charAt(0) == '0') return false;
        for (char letter : s.toCharArray()) {
            if (!Character.isDigit(letter)) {
                return false;
            }
        }
        return true;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int  t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            String s = sc.nextLine().trim();
            int evenCount = 0;
            int oddCount = 0;
            if (!isValid(s)) {
                System.out.println("INVALID");
                continue;
            }
            for (int i = 0; i < s.length(); i++) {
                int x = s.charAt(i) - '0';
                if (x % 2 == 0) {
                    evenCount++;
                } else {
                    oddCount++;
                }
            }
            if (evenCount > oddCount) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        sc.close();
    }
}
