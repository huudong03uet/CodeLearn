public class thayDoiGiaTri {
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		int cnt = 0;
		for(int i = 0; i < s.length(); i++) {
			if(s.charAt(i) <= 'Z' && s.charAt(i) >= 'A') cnt++;
		}
		System.out.println(cnt);
	}
}
