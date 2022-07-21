import java.util.Scanner;

public class tinhTongPhanTu2 {
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int sum = 0;
		for(int i = 0; i < n; i++) {
			int number = sc.nextInt();
			if(number > 0 && number % 2 == 1) sum += number;
		}
		System.out.print(sum);
	}
}
