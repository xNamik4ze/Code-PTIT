/*
Cho một số nguyên dương không quá 200 chữ số. 
Mỗi bước tách số nguyên thành hai nửa: nửa đầu là n/2 chữ số đầu tiên, nửa sau là phần còn lại (trong đó n là số chữ số của số ban đầu, nếu n lẻ thì phép chia 2 sẽ tính phần nguyên). 
Sau đó thực hiện tính tổng của hai nửa này.
Lặp lại các bước trên cho đến khi kết quả chỉ còn là số có 1 chữ số.
Hãy thực hiện tính toán và in kết quả của từng bước.
 */

import java.io.BufferedReader;
import java.io.FileReader;
import java.math.BigInteger;

public class J07003 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new FileReader("DATA.in"));
        String s = br.readLine();
        br.close();

        while (s.length() > 1)  {
            int mid = s.length() / 2;
            BigInteger left = new BigInteger(s.substring(0, mid));
            BigInteger right = new BigInteger(s.substring(mid));
            s = left.add(right).toString();
            System.out.println(s);
        }
    }
}
