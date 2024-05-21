import java.util.Scanner;

    public class TaxCalculator {
        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);

            System.out.println("Enter Your Yearly Income : ");
            double amount = scanner.nextInt();
            double tax=0;

            if (amount < 350000) {
                tax = tax;
            }
            if (amount > 350000 && amount < 450000) {
                tax = (amount - 350000) / 20.0;
            }
            else if (amount > 450000 && amount < 750000) {
                tax = ((amount - 450000) / 10.0) + 5000;
            }
            else if (amount > 750000 && amount < 1150000) {
                tax = ((amount - 750000) * (15 / 100.0)) + 35000;
            }
            if (amount > 1150000 && amount < 1650000) {
                tax = ((amount - 1150000) / 5.0) + 95000;
            }
            if (amount > 1650000) {
                tax = ((amount - 1650000) / 4.0) + 195000;
            }
            System.out.println(tax);
        }
    }
