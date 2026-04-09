/*
Địa chỉ email của các cán bộ, giảng viên PTIT được tạo ra bằng cách viết đầy đủ tên và ghép với các chữ cái đầu của họ và tên đệm. 
Nếu có nhiều người cùng email thì từ người thứ 2 sẽ thêm số thứ tự vào email đó.
Cho trước các xâu họ tên (có thể không chuẩn). Hãy tạo ra các địa email tương ứng.
 */

import java.util.*;

public class S052_J03010 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        
        Map<String, Integer> mail = new HashMap<>();
        
        for (int i = 0; i < t; i++) {
            String line = sc.nextLine().trim().toLowerCase();
            String[] parts = line.split("\\s+");
            
            String name = parts[parts.length - 1];
            String result = name;
            for (int j = 0; j < parts.length - 1; j++) {
                result += parts[j].charAt(0);
            }
            
            mail.put(result, mail.getOrDefault(result, 0) + 1);
            
            if (mail.get(result) == 1) {
                System.out.println(result + "@ptit.edu.vn");
            } else {
                System.out.println(result + mail.get(result) + "@ptit.edu.vn");
            }
        }
        sc.close();
    }
}