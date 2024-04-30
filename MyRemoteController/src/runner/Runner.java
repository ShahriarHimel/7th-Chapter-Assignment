package runner;
import controller.Remote;
public class Runner {
    public static void main(String[] args) {
        Remote remote =new Remote();
        System.out.println(remote.getColor());
    }
}
