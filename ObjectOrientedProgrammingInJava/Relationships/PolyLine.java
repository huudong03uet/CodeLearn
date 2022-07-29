import java.util.ArrayList;
import java.util.List;

public class PolyLine {
    private List<Point> points;

    public PolyLine() {
        points = new ArrayList<Point>();

    }
    public PolyLine(List<Point> points) {
        this.points = points;
    }
    public void appendPoint(Point point) {
        this.points.add(point);
    }
    public void appendPoint(int x, int y) {
        Point newPoint = new Point(x, y);
        this.points.add(newPoint);
    }
    public double getLength() {
        double result = 0;
        for(int i = 1; i < points.size(); i++)
        {
            double x_tmp = Math.pow(points.get(i).getX() - points.get(i - 1).getX(), 2);
            double y_tmp = Math.pow(points.get(i).getY() - points.get(i - 1).getY(), 2);
            result += Math.sqrt(x_tmp + y_tmp);
        }
        return result;
    }
}
