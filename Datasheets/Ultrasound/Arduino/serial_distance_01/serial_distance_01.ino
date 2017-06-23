


const int trigPin = 9;
const int echoPin = 10;



long duration;
int distance;

int digit_1;
int digit_2;
int digit_3;
int digit_4;

int rest;

//int i = 0;

void setup()
{
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
}

void loop()
{
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH); // Reads the echoPin, returns the sound wave travel time in microseconds

distance= duration*0.034/2; // Calculating the distance (cm)

//if(i > 9999) i = 0;
//distance = i++;

digit_1 = distance / 1000;
rest = distance - (digit_1 * 1000);
digit_2 = rest / 100;
rest = rest - (digit_2 * 100);
digit_3 = rest / 10;
rest = rest - (digit_3 * 10);
digit_4 = rest;

// Prints the distance on the Serial
Serial.print('d');
//Serial.println(distance);
Serial.print(digit_1);
Serial.print(digit_2);
Serial.print(digit_3);
Serial.println(digit_4);
}
