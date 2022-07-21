import java.util.Scanner;

public class xacDinhViTri {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        int y = scanner.nextInt();
        if (x > 0 && y > 0) {
            System.out.println("This point lies in the First quadrant");
        } else if (x > 0 && y < 0) {
            System.out.println("This point lies in the Fourth quadrant");
        } else if (x < 0 && y < 0) {
            System.out.println("This point lies in the Third quadrant");
        } else if (x < 0 && y > 0) {
            System.out.println("This point lies in the Second quadrant");
        }
    }
}
