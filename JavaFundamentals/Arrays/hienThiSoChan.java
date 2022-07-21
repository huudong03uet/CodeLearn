import java.util.Scanner;

public class hienThiSoChan {
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
        for(int i = 0; i < n; i++) {
            int number = sc.nextInt();
            if(number % 2 == 0) {
                System.out.print(number + " ");
            }
        }
	}
}
