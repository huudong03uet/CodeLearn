public class FullTimeEmployee extends Employees {
    public FullTimeEmployee(String name, int paymentPerHour) {
        super(name, paymentPerHour);
    }
    public int calculateSalary() {
        return 8 * super.getPaymentPerHour();
    }
}
