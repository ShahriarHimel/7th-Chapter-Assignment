import java.util.Random;

public class Second_Problem {
    public static void main(String[] args) {
        int[] randNum = new int[10];
        Random generator = new Random();
            for(int i = 0; i < 10; i++) {
            randNum[i] = generator.nextInt(1000);
        }
        for(int i = 0; i < 10; i = i + 2) {
            System.out.print(randNum[i] + " ");
        }
        System.out.println();
        for(int i = 0; i < 10; i++) {
            if(randNum[i]%2==0) {
                System.out.print(randNum[i] + " ");
            }
        }
        System.out.println();
        for(int i = 9; i >= 0; i--) {
            System.out.print(randNum[i] + " ");
        }
        System.out.println();
        System.out.print(randNum[0] + " ");
        System.out.println(randNum[9]);
    }
}
