import java.awt.*;

public class Robot {
    int n = 1;
    public void turnLeft(){
        n--;
    }

    public void turnRight(){
        n++;
    }

    public void move(){

    }

    public int getLocation(int x, int y){
        System.out.println("(" + x + "," + y + ")");
        return 0;
    }
    public String getDirection(){

        String direction = null;
        if(n==1||n== n+4||n==n-4){
            direction = "North";
        }
        if(n==0||n== n+4||n==n-4){
            direction = "West";
        }
        if(n==-1||n== n+4||n==n-4){
            direction = "South";
        }
        if(n==-2||n== n+4||n==n-4){
            direction = "East";
        }
        return direction;
    }

}
