package CarTemperatureController;

public class CarTemperatureConrollerRunner {
    public static void main(String[] args) {
        CarTemperatureController driver,passenger1,passenger2;

        driver = new CarTemperatureController();
        passenger1 = new CarTemperatureController(50,60);
        passenger2 = new CarTemperatureController(60,70);

        driver.up();
        driver.up();
        driver.down();
        System.out.println(driver.getCurrentTemperature());

        passenger1.down();
        passenger1.up();
        passenger1.up();
        System.out.println(passenger1.getCurrentTemperature());

        passenger2.down();
        passenger2.down();
        passenger2.up();
        System.out.println(passenger2.getCurrentTemperature());
    }
}
