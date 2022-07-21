import java.util.Scanner;

public class hienThiPhanTu {
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for(int i = 0; i < n; i++) {
			int number = sc.nextInt();
			if(number >= 0 && number <= 10) {
				System.out.print(number + " ");
			}
		}
	}
}
