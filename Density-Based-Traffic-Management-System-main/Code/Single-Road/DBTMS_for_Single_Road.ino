#include <TM1637Display.h>

// Define the pins for the TM1637 display
#define CLK_PIN 27
#define DIO_PIN 26

// Define maximum sensor distance
#define MAX_DISTANCE 350 

// Define LED pins
#define GREEN_PIN 30
#define YELLOW_PIN 29
#define RED_PIN 28

// Define ultrasonic sensor pins for road 1 (example)
#define TRIG_PIN1 23
#define ECHO_PIN1 22
#define TRIG_PIN2 25
#define ECHO_PIN2 24

TM1637Display display(CLK_PIN, DIO_PIN);

void setup() {
    // Initialize the TM1637 display
    display.setBrightness(0x0f); // Set the brightness to maximum
    
    // Initialize LED pins
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(YELLOW_PIN, OUTPUT);
    pinMode(RED_PIN, OUTPUT);
    
    // Initialize ultrasonic sensor pins
    pinMode(TRIG_PIN1, OUTPUT);
    pinMode(ECHO_PIN1, INPUT);
    pinMode(TRIG_PIN2, OUTPUT);
    pinMode(ECHO_PIN2, INPUT);
}

void loop() {
    // Read values from sensors
    int distance1 = readUltrasonic(TRIG_PIN1, ECHO_PIN1);
    int distance2 = readUltrasonic(TRIG_PIN2, ECHO_PIN2);

    if ((distance1 < MAX_DISTANCE) && (distance2 < MAX_DISTANCE)) {
        manageTraffic(15);
    } else if (distance1 < MAX_DISTANCE) {
        manageTraffic(10);
    } else {
        digitalWrite(GREEN_PIN, LOW);
        digitalWrite(YELLOW_PIN, LOW);
        digitalWrite(RED_PIN, HIGH);
        display.clear();
    }
    
    // Add code to repeat the above steps for remaining roads
}

int readUltrasonic(int trigPin, int echoPin) {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    
    long duration = pulseIn(echoPin, HIGH);
    int distance = duration * 0.034 / 2;
    return distance;
}

void manageTraffic(int greenDuration) {
    digitalWrite(GREEN_PIN, HIGH);
    digitalWrite(YELLOW_PIN, LOW);
    digitalWrite(RED_PIN, LOW);
    showTimer(greenDuration);
        
    digitalWrite(GREEN_PIN, LOW);
    digitalWrite(YELLOW_PIN, LOW);
    digitalWrite(RED_PIN, HIGH);
}

void showTimer(int duration) {
    for (int i = duration; i >= 0; i--) {
        display.showNumberDec(i); // Display the number on the TM1637
        if (i <= 5) {
          digitalWrite(GREEN_PIN, HIGH);
          digitalWrite(YELLOW_PIN, HIGH);
          digitalWrite(RED_PIN, LOW);
        }
        delay(1000);
    }
}
