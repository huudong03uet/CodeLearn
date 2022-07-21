import java.util.Scanner;

public class kiemTraGiaTri {
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		if(a <= 100 && a >= 10) {
			System.out.println(a + " is in the range [10, 100]");
		} else {
			System.out.println(a + " is not in the range [10, 100]");
		}
	}
}
