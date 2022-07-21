import java.util.Scanner;

public class timViTriXuatHien {
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        String s = sc.next();
        char c = sc.next().charAt(0);
        
        boolean hasChar = false;
        for(int i = 0; i < s.length(); i++)
            if(s.charAt(i) == c) {
                System.out.println(i);
                hasChar = true;
            }
        if(hasChar == false) {
            System.out.println(-1);
        }
	}
}
