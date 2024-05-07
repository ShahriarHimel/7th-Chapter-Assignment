package CarTemperatureController;

import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.*;

class CarTemperatureControllerTest {
    CarTemperatureController driver, passenger1, passenger2;

    @BeforeEach
     void setup() {
        driver = new CarTemperatureController();
        passenger1 = new CarTemperatureController(50, 70);
        passenger2 = new CarTemperatureController(40, 60);
    }
    @Test
    void TemperatureForDriver() {
        for(int i=0; i<5; i++) {
            driver.up();
        }
        driver.down();
        assertEquals(74,driver.getCurrentTemperature());
    }
    @Test
   void TemperatureForPassenger1() {
        for(int i=0; i<4; i++) {
            passenger1.down();
        }
        passenger1.up();
        assertEquals(57,passenger1.getCurrentTemperature());
    }
    @Test
    void TemperatureForPassenger2() {
        for(int i=0; i<7; i++) {
            passenger2.down();
        }
        for(int i=0; i<3; i++) {
            passenger2.up();
        }
        assertEquals(46,passenger2.getCurrentTemperature());
    }
}