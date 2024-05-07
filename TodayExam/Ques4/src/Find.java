import com.sun.org.apache.xpath.internal.functions.FuncSubstring;

import java.io.File;

import java.io.FileNotFoundException;
import java.util.Scanner;

public class Find {
    public static void main(String[] args) throws FileNotFoundException{
        String n = null;

        Scanner sc = new Scanner(new File("report.txt"));
        while (sc.hasNextLine()){
             n = sc.nextLine();
            n.contains("DVD");

            System.out.println(n);
        }

    }
}
