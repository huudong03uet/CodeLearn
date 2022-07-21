class Math {
    public static double PI = 3.14;
    public static int abs(int x) {
        if(x < 0) return -x;
        else return x;
    }
    public static int add(int x, int y) {
        return x + y;
    }

    public static int subtract(int a, int b) {
        return a - b;
    }
    public static int min(int a, int b) {
        if(a < b) return a;
        return b;
    }
    public static int max(int a, int b) {
        if(a > b) return a;
        return b;
    }
    public static int pow(int x, int y) {
        int result = 1;
        for(int i = 1; i <= y; i++) result *= x;
        return result;
    }
}