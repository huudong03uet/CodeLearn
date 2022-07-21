import java.util.Scanner;

class Rectangle{
	private double a;
    private double b;
    public void getInformation() {
        Scanner sc = new Scanner(System.in);
        a = sc.nextDouble();
        b = sc.nextDouble();
    }
    public void display(){
        System.out.println("Area: " + (a * b));
        System.out.println("Perimeter: " + 2 * (a + b));
    }
}

public class tinhChuViDienTich {
    public static void main(String[]args) {
        Rectangle r = new Rectangle();
        r.getInformation();
        r.display();
    }
}