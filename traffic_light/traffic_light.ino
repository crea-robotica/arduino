/**
 * @brief Traffic Light
 * @author CREA Robotica Educativa
 * @license GPLv3
 *
 * https://crea-robotica.com/
 */

// variables

int red = 2;
int yellow = 4;
int green = 7;

// the setup routine runs once when you press reset:
void setup()
{
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop()
{
    // turn on the green light during 2 seconds
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    delay(2000);

    // turn on the yellow light during 1 second
    digitalWrite(yellow, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(red, LOW);
    delay(1000);

    // turn on the green light during 2 seconds
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    delay(2000);
}
