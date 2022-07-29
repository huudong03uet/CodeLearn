public class Time {
    private int hour;
    private int minute;
    private int second;

    public Time(int hour, int minute, int second) {
        this.hour = hour;
        this.minute = minute;
        this.second = second;
    }

    public int getHour() {
        return hour;
    }

    public void setHour(int hour) {
        this.hour = hour;
    }

    public int getMinute() {
        return minute;
    }

    public void setMinute(int minute) {
        this.minute = minute;
    }

    public int getSecond() {
        return second;
    }

    public void setSecond(int second) {
        this.second = second;
    }
    public void setTime(int hour, int minute, int second) {
        this.hour = hour;
        this.minute= minute;
        this.second = second;
    }
    public void nextSecond() {
        second++;
        if(second >= 60) {
            minute++;
            second = 0;
        }
        if(minute >= 60) {
            hour++;
            minute = 0;
        }
        if(hour >= 24) {
            hour = 0;
        }
    }

    public void previousSecond() {
        second--;
        if(second < 0) {
            second = 59;
            minute--;
        }
        if(minute < 0) {
            minute = 59;
            hour--;
        }
        if(hour < 0) hour = 23;
    }
    
    public void display() {
        if(hour < 10) System.out.print("0");
        System.out.print(hour + ":");
        if(minute < 10) System.out.print("0");
        System.out.print(minute + ":");
        if(second < 10) System.out.print("0");
        System.out.println(second);
    }
} 
