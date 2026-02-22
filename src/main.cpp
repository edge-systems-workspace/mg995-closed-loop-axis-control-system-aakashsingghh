// File: src/main.cpp
    /**
     * @file src/main.cpp
     * @brief Main firmware entry for uno_r4_wifi
     * @author aakash
     * @version 1.0
     * @date 2026-02-22
     *
     * @details
     * Example servo control loop. Public functions are documented for Doxygen.
     */

    #include <Arduino.h>
    #include <Servo.h>

    #define SERVO_PIN 3

    Servo myServo;

    /**
     * @brief Initialize peripherals and debug serial.
     */
    void setup() {
        Serial.begin(9600);
        myServo.attach(SERVO_PIN);
        Serial.println("Setup complete");
    }

    /**
     * @brief Main Arduino loop: sweep servo through angles.
     *
     * Sequence: 0 -> 90 -> 120 -> 180 -> 0
     */
    void loop() {
        myServo.write(0);
        delay(500);

        myServo.write(90);
        delay(500);

        myServo.write(120);
        delay(500);

        myServo.write(180);
        delay(500);

        myServo.write(0);
        delay(500);
    }
    delay(500);
    myServo.write(270);
    delay(500);


}