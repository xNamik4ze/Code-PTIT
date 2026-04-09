/*
Viết chương trình khai báo lớp Rectange với các thuộc tính và phương thức như sau:
Viết chương trình nhập vào giá trị độ dài hai cạnh của hình chữ nhật và màu sắc. 
In ra thông tin về chu vi, diện tích và màu sắc (đã đưa về dạng chuẩn trong đó ký tự đầu viết hoa, các ký tự sau viết thường) của hình chữ nhật đó.
 */

import java.util.Scanner;

class Rectangle {
    private int width, height;
    private String color;

    public Rectangle() {
        this.width = 1;
        this.height = 1;
    }

    public Rectangle(int width, int height, String color) {
        this.width = width;
        this.height = height;
        this.color = color;
    }

    public int getWidth() {
        return width;
    }
    
    public void setWidth(int width) {
        this.width = width;
    }   

    public int getHeight() {
        return height;
    }
    
    public void setHeight(int height) {
        this.height = height;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public int findArea() {
        return this.width * this.height;
    }

    public int findPerimeter() {
        return 2 * (this.width + this.height);
    }
}

public class S067_J04002 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int width = sc.nextInt();
        int height = sc.nextInt();
        String color = sc.next();

        if (width <= 0 || height <= 0) {
            System.out.println("INVALID");
        } else {
            Rectangle rect = new Rectangle(width, height, color);
            String c = rect.getColor().substring(0, 1).toUpperCase() + rect.getColor().substring(1).toLowerCase();
            System.out.printf("%d %d %s\n", rect.findPerimeter(), rect.findArea(), c);
        }
        sc.close();
    }
}
