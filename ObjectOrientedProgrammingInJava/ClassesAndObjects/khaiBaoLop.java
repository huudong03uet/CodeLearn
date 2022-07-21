
import java.util.Scanner;

class Student{
	private String name;
    private int age;
    private Scanner sc;
    public void getInformation() {
        sc = new Scanner(System.in);
        name = sc.next();
        age = sc.nextInt();
    }
    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}


public class khaiBaoLop {
    public static void main(String[]args) {
        Student s1 = new Student();
        s1.getInformation();
        s1.display();
    }
}
