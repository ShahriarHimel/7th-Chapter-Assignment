import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.*;
class TemperatureTest2 {

    Temperature passenger1;

    @BeforeEach
    void setup() {
        passenger1 = new Temperature();
    }

    @Test
    void currentTemperaturePassenger1() {
        passenger1.up();
        passenger1.up();
        passenger1.down();
        assertEquals(71,passenger1.getCurrentTemp());

    }

    @Test
    void up() {
    }

    @Test
    void down() {
    }

    @Test
    void getCurrentTemp() {
    }
}