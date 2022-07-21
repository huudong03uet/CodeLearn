import java.util.Scanner;



public class bieuDienDoiTuong {
    private String name;
    private int age;
    public bieuDienDoiTuong() {

    }
    public void getInformation() {
        Scanner sc = new Scanner(System.in);
        name  = sc.next();
        age = sc.nextInt();
    }
    
    public void display() {
        System.out.println("name: " + name);
        System.out.println("age: " + age);
    }
}