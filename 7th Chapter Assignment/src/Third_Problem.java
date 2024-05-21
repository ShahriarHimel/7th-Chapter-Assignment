import java.util.Scanner;

public class Third_Problem {
        public static void main(String[] args) {
             final int LENGTH = 100;
             double[] values = new double[LENGTH];
             int currentSize = 0;

             System.out.print("Please enter values, Q to quit : ");
             Scanner in = new Scanner(System.in);
             while (in.hasNextDouble() && currentSize < values.length) {
                 values[currentSize] = in.nextDouble();
                 currentSize++;
                }
             double largest = values[0];
             for (int i = 1; i < currentSize; i++) {
                 if (values[i] > largest) {
                     largest = values[i];
                     }
                 }
            double smallest = values[0];
            for (int i = 1; i < currentSize; i++) {
                if (values[i] < smallest) {
                    smallest = values[i];
                }
            }
             for (int i = 0; i < currentSize; i++) {
                System.out.print(values[i]);
                if (values[i] == largest) {
                    System.out.print(" <== largest value");
                }
                else if(values[i] == smallest)
                    System.out.print(" <== smallest value");
                System.out.println();
             }
        }
}
