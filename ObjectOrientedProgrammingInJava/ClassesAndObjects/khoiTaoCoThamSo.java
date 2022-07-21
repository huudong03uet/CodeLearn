class Student {
	private String name;
    private int age;
    public Student() {
        
    }
    public Student(String name, int age) {
        this.name = name;
        this.age = age;
    }
    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

public class khoiTaoCoThamSo {
    public static void main(String[] args) {
        Student s1 = new Student("Long", 24);
        Student s2 = new Student("Kien", 29);
        s1.display();
        s2.display();
    }
}
