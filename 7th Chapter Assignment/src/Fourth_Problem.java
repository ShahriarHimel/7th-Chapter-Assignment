import java.util.Scanner;

public class Fourth_Problem {
    public static void main(String[] args) {
        double[] values = new double[5];
        System.out.println("Sum Without Smallest : " + sumWithoutSmallest(values));
    }

    public static double sumWithoutSmallest(double[] values) {
        Scanner in = new Scanner(System.in);
        values[0] = in.nextDouble();
        double smallest, sum;
        smallest = sum = values[0];
        for(int i = 1; i<values.length; i++) {
            values[i] = in.nextDouble();
            sum += values[i];
            if(values[i] < smallest) {
                smallest = values[i];
            }
        }
        return sum - smallest;
    }
}