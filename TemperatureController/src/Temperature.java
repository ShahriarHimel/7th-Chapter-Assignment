public class Temperature {

    public int currentTemp,minTemp,maxTemp;

    public Temperature() { minTemp=60; maxTemp=80; calcTemp(); }
    public Temperature(int min, int max) { minTemp=min; maxTemp=max; calcTemp(); }

    private void calcTemp() { currentTemp=(minTemp+maxTemp)/2; }

    public void up() { currentTemp=Math.min(currentTemp+1,maxTemp); }
    public void down() { currentTemp=Math.max(minTemp,currentTemp-1); }

    public int getCurrentTemp() { return currentTemp; }
}
