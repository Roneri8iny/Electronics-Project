#include<Servo.h>
#define rightIr 6
#define leftIr 8
#define frontIr 7
#define buzzer 13
#define motor1 10
#define motorr1 11
#define motor2  4
#define motorr2 3
Servo servo;


void setup() {
    // put your setup code here, to run once:

    pinMode(6, INPUT);
    pinMode(8, INPUT);
    pinMode(7, INPUT);
    pinMode(13, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    servo.attached(A5);
    servo.write(0);
    int pos = 0;
}

void loop() {
    // put your main code here, to run repeatedly:


    if (digitalRead(rightIr) && !(digitalRead(leftIr)) && !(digitalRead(frontIr))
    {
        digitalWrite(buzzer, HIGH);
            servo.write(60);
            digitalWrite(motor1, HIGH);
            digitalWrite(motor1, LOW);
            digitalWrite(motor2, HIGH);
            digitalWrite(motorR2, LOW);
    }
    else if (!(digitalRead(righIr)) && digitalRead(leftIr) && !(digitalRead(frontIr))
    {
        digitalWrite(buzzer, HIGH);
            servo.write(150);
            digitalWrite(motor1, HIGH);
            digitalWrite(motor1, LOW);
            digitalWrite(motor2, HIGH);
            digitalWrite(motorR2, LOW);
    }
    else if (!(digitalRead(righIr)) && !(digitalRead(leftIr)) && (digitalRead(frontIr))
    {
        digitalWrite(buzzer, HIGH);
            servo.write(90);
            digitalWrite(motor1, HIGH);
            digitalWrite(motor1, LOW);
            digitalWrite(motor2, HIGH);
            digitalWrite(motorR2, LOW);
    }
    else if (!(digitalRead(righIr)) && (digitalRead(leftIr)) && (digitalRead(frontIr))
    {
        digitalWrite(buzzer, HIGH);
            servo.write(120);
            digitalWrite(motor1, HIGH);
            digitalWrite(motor1, LOW);
            digitalWrite(motor2, HIGH);
            digitalWrite(motorR2, LOW);
    }

    else if ((digitalRead(righIr)) && !(digitalRead(leftIr)) && (digitalRead(frontIr))
    {
        digitalWrite(buzzer, HIGH);
            servo.write(75);
            digitalWrite(motor1, HIGH);
            digitalWrite(motor1, LOW);
            digitalWrite(motor2, HIGH);
            digitalWrite(motorR2, LOW);
    }

    else if ((digitalRead(righIr)) && (digitalRead(leftIr)) && (digitalRead(frontIr))
    {
        digitalWrite(buzzer, HIGH);
            servo.write(75);
            digitalWrite(motor1, HIGH);
            digitalWrite(motor1, LOW);
            digitalWrite(motor2, HIGH);
            digitalWrite(motorR2, LOW);
    }

    else if (!(digitalRead(righIr)) && !(digitalRead(leftIr)) && !(digitalRead(frontIr))
    {
        digitalWrite(buzzer, LOW);
            servo.write(0);
            digitalWrite(motor1, LOW);
            digitalWrite(motor1, LOW);
            digitalWrite(motor2, LOW);
            digitalWrite(motorR2, LOW);
    }
}