import java.util.ArrayList;

public class Sequence {
    public ArrayList<Integer> values;
    public Sequence(){
        values = new ArrayList<Integer>();
    }
    public void add(int n){
        values.add(n);
    }
    public String toString(){
        return values.toString();
    }

    public Sequence append(Sequence other){

        other.toString();

        return other;
    }


}
