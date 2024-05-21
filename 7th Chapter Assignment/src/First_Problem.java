import java.util.Scanner;
public class First_Problem {
    public static void main(String[] args) {
        int[] number = new int[10];
        Scanner in = new Scanner(System.in);
        System.out.print("Enter 10 Numbers : ");
        for(int i = 0; i < 10; i++) {
            number[i] = in.nextInt();
        }
        for(int i = 9; i >= 0; i--) {
            System.out.print(number[i] + " ");
        }
    }
}
