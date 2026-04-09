/*
Cho một xâu ký tự str bao gồm nhiều từ trong xâu. 
Hãy đảo ngược từng từ trong xâu?
 */

import java.util.*;

public class S061_J03032 {
    public static String reverse(String s) {
        return new StringBuilder(s).reverse().toString();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < t; i++) {
            String line = sc.nextLine();
            String[] words = line.split(" ");
            for (int j = 0; j < words.length; j++) {
                words[j] = reverse(words[j]);
            }
            System.out.println(String.join(" ",words));
        }
        sc.close();
    }
}
