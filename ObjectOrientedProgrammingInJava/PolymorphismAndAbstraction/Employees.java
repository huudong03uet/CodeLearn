abstract class Employees implements IEmployee {
    private String name;
    private int paymentPerHour;

    @Override
    public String getName() {
        return name;
    }
    

    public void setName(String name) {
        this.name = name;
    }


    public int getPaymentPerHour() {
        return paymentPerHour;
    }

    public void setPaymentPerHour(int paymentPerHour) {
        this.paymentPerHour = paymentPerHour;
    }

    public Employees(String name, int paymentPerHour) {
        this.name = name;
        this.paymentPerHour = paymentPerHour;
    }

    
}
