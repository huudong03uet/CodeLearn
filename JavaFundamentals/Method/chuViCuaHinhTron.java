public class chuViCuaHinhTron {
    public static double circumference(double r){
		return r * 3.14 * 2;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		double r = sc.nextDouble();
		System.out.print(circumference(r));
	}
}
