class ArrayCalculator {
    public ArrayCalculator(){};
    public static double maxOfArray(double[] arr) {
        double number_max = arr[0];
        for(int i = 0; i < arr.length; i++)
            if(number_max < arr[i]) number_max = arr[i];
        return number_max;
    }
    public static double minOfArray(double[] arr) {
        double number_max = arr[0];
        for(int i = 0; i < arr.length; i++)
            if(number_max > arr[i]) number_max = arr[i];
        return number_max;
    }
    
    public static int maxOfArray(int[] arr) {
        int number_max = arr[0];
        for(int i = 0; i < arr.length; i++)
            if(number_max < arr[i]) number_max = arr[i];
        return number_max;
    }
    public static int minOfArray(int[] arr) {
        int number_max = arr[0];
        for(int i = 0; i < arr.length; i++)
            if(number_max > arr[i]) number_max = arr[i];
        return number_max;
    }
}
