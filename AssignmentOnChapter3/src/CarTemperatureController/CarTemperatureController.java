package CarTemperatureController;

public class CarTemperatureController {
    private int minimumTemperature, maximumTemperature, currentTemperature;

    public CarTemperatureController() {
        minimumTemperature = 60;
        maximumTemperature = 80;
        calculateTemperature();
    }
    public CarTemperatureController(int min, int max) {
        minimumTemperature = min;
        maximumTemperature = max;
        calculateTemperature();
    }
    private void calculateTemperature() {
        currentTemperature = (minimumTemperature + maximumTemperature) / 2;
    }
    public void up() {
        currentTemperature = Math.min(currentTemperature + 1, maximumTemperature);
    }
    public void down() {
        currentTemperature = Math.max(currentTemperature - 1, minimumTemperature);
    }
    public int getCurrentTemperature() {
        return currentTemperature;
    }
}

