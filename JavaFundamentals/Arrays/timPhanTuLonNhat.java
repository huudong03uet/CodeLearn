import java.util.Scanner;

public class timPhanTuLonNhat {
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] arr = new int[n];
		int n_max = -1000;
		for(int i = 0; i < n; i++) {
			int number = sc.nextInt();
			if(number > n_max) n_max = number;
		}
		System.out.print(n_max);
	}
}
