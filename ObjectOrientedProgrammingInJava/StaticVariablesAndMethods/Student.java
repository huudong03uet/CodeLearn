class Student {
    private String name;
    private char gender;
    public Student(){
        name = "Unknown";
        gender = 'u';
    }
    public Student(String name) {
        this.name = name;
        gender = 'u';
    }
    public Student(char gender) {
        this.gender = gender;
        name = "Unknown";
    }
    public Student(String name, char gender) {
        this.name = name;
        this.gender = gender;
    }
    public void display() {
        System.out.println("Name: " + name);
        if(gender == 'f') {
            System.out.println("Gender: Female");
        } else if(gender == 'm') {
            System.out.println("Gender: Male");
        } else {
            System.out.println("Gender: Unknown");
        }
    }
    
}