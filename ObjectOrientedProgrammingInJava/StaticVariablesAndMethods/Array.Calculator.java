class ArrayCalculator {
    ArrayCalculator(){};
    public static int sumOfArray(int[] arr) {
        int result = 0;
        for(int i = 0; i < arr.length; i++)
            result += arr[i];
        return result;
    }
    public static double sumOfArray(double[] arr){
        double result = 0;
        for(int i = 0; i < arr.length; i++)
            result += arr[i];
        return result;
    }
}