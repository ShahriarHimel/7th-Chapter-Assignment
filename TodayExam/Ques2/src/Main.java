public class Main {
    public static void main(String[] args) {
        Robot robot = new Robot();

        robot.turnLeft();
        robot.turnLeft();
        robot.turnLeft();
        robot.turnRight();


        System.out.println(robot.getDirection());
        System.out.println(robot.getLocation(5,7));
    }
}
