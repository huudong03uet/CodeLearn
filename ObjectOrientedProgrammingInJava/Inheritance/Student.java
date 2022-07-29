public class Student {
    private String name;
    private String address;
    private double gpa;

    Student(String name, String address, double gpa) {
        this.name = name;
        this.address = address;
        this.gpa = gpa;

    }
    public String toString() {
		return "Name: " + name + ", address: " + address + ", GPA: " + gpa;
	}
}
