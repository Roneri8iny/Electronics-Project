#include<Servo.h>
#define motor1 2
#define motorr1 3
#define motor2  4
#define motorr2 5
#define motor3 6
#define motorr3 7
#define motor4 8
#define motorr4 9
#define rightIr 10
#define leftIr 12
#define frontIr 11
#define buzzer 13

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
	servo.attach(A0);
	servo.write(0);

}

void loop() {
	// put your main code here, to run repeatedly:

	if (digitalRead(rightIr) && !(digitalRead(leftIr)) && !(digitalRead(frontIr)))
	{
		digitalWrite(buzzer, HIGH);
		servo.write(60);
		digitalWrite(motor1, HIGH);
		digitalWrite(motorr1, LOW);
		digitalWrite(motor2, HIGH);
		digitalWrite(motorr2, LOW);
		digitalWrite(motor3, HIGH);
		digitalWrite(motorr3, LOW);
		digitalWrite(motor4, HIGH);
		digitalWrite(motorr4, LOW);
	}
	else if (!(digitalRead(rightIr)) && digitalRead(leftIr) && !(digitalRead(frontIr)))
	{
		digitalWrite(buzzer, HIGH);
		servo.write(150);
		digitalWrite(motor1, HIGH);
		digitalWrite(motorr1, LOW);
		digitalWrite(motor2, HIGH);
		digitalWrite(motorr2, LOW);
		digitalWrite(motor3, HIGH);
		digitalWrite(motorr3, LOW);
		digitalWrite(motor4, HIGH);
		digitalWrite(motorr4, LOW);
	}
	else if (!(digitalRead(rightIr)) && !(digitalRead(leftIr)) && (digitalRead(frontIr)))
	{
		digitalWrite(buzzer, HIGH);
		servo.write(90);
		digitalWrite(motor1, HIGH);
		digitalWrite(motorr1, LOW);
		digitalWrite(motor2, HIGH);
		digitalWrite(motorr2, LOW);
		digitalWrite(motor3, HIGH);
		digitalWrite(motorr3, LOW);
		digitalWrite(motor4, HIGH);
		digitalWrite(motorr4, LOW);
	}
	else if (!(digitalRead(rightIr)) && (digitalRead(leftIr)) && (digitalRead(frontIr)))
	{
		digitalWrite(buzzer, HIGH);
		servo.write(120);
		digitalWrite(motor1, HIGH);
		digitalWrite(motorr1, LOW);
		digitalWrite(motor2, HIGH);
		digitalWrite(motorr2, LOW);
		digitalWrite(motor3, HIGH);
		digitalWrite(motorr3, LOW);
		digitalWrite(motor4, HIGH);
		digitalWrite(motorr4, LOW);
	}

	else if ((digitalRead(rightIr)) && !(digitalRead(leftIr)) && (digitalRead(frontIr)))
	{
		digitalWrite(buzzer, HIGH);
		servo.write(75);
		digitalWrite(motor1, HIGH);
		digitalWrite(motorr1, LOW);
		digitalWrite(motor2, HIGH);
		digitalWrite(motorr2, LOW);
		digitalWrite(motor3, HIGH);
		digitalWrite(motorr3, LOW);
		digitalWrite(motor4, HIGH);
		digitalWrite(motorr4, LOW);
	}

	else if ((digitalRead(rightIr)) && (digitalRead(leftIr)) && (digitalRead(frontIr)))
	{
		digitalWrite(buzzer, HIGH);
		servo.write(75);
		digitalWrite(motor1, HIGH);
		digitalWrite(motorr1, LOW);
		digitalWrite(motor2, HIGH);
		digitalWrite(motorr2, LOW);
		digitalWrite(motor3, HIGH);
		digitalWrite(motorr3, LOW);
		digitalWrite(motor4, HIGH);
		digitalWrite(motorr4, LOW);
	}

	else
	{
		digitalWrite(buzzer, LOW);
		servo.write(0);
		digitalWrite(motor1, LOW);
		digitalWrite(motorr1, LOW);
		digitalWrite(motor2, LOW);
		digitalWrite(motorr2, LOW);
		digitalWrite(motor3, LOW);
		digitalWrite(motorr3, LOW);
		digitalWrite(motor4, LOW);
		digitalWrite(motorr4, LOW);
	}
}