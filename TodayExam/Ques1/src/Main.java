import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Sequence sequence = new Sequence();
        Scanner input = new Scanner(System.in);
        Sequence anotherSequence = new Sequence();

        while (input.hasNextInt()){
            sequence.add(input.nextInt());
        }
        anotherSequence.add(10);
        anotherSequence.add(20);
        anotherSequence.add(30);

        sequence.append(anotherSequence);
        
        System.out.println(sequence.values +""+ sequence.append(anotherSequence));


    }
}
