/*
Cho file văn bản DATA.in
Hãy đọc toàn bộ nội dung của file và in ra màn hình theo đúng định dạng ban đầu. 
 */

import java.io.File;
import java.util.Scanner;

public class J07001 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File("DATA.in"));
        while (sc.hasNextLine()) {
            System.out.println(sc.nextLine());
        }
        sc.close();
    }
}