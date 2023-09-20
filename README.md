# Arduino Sketches

This repository contains three separate Arduino sketches:

## 1. LED Blinking

**File:** `led_blink.ino`

This sketch blinks an LED connected to pin 6. It turns the LED on for 500 milliseconds and then off for 600 milliseconds in an infinite loop.

## 2. Ultrasonic Distance Sensor

**File:** `ultrasonic_distance_sensor.ino`

This sketch uses an ultrasonic distance sensor to measure the distance to an object. It sets up a trigger pin (A1), an echo pin (A0), and an LED (pin 4). When an object is detected at a distance greater than 15 cm, the LED is turned on.

## 3. Servo Motor Control

**File:** `servo_motor_control.ino`

This sketch controls a servo motor attached to pin 6. It moves the servo from 0 degrees to 90 degrees and then back to 0 degrees, repeatedly.

### Getting Started

1. Upload each sketch to your Arduino board using the Arduino IDE.

2. Ensure that your Arduino board is properly connected to the components as described in the sketches.

3. Run the respective sketches on your Arduino to see the intended behavior.

Feel free to modify and expand upon these sketches for your Arduino projects.
