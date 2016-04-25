/**
 * @brief Hello World
 * @author CREA Robotica Educativa
 * @license GPLv3
 *
 * https://crea-robotica.com/
 */

// the setup routine runs once when you press reset:
void setup()
{
    // open serial port to 9600 bps
    Serial.begin(9600);
    
    // empty serial port
    Serial.flush();
}

// the loop routine runs over and over again forever:
void loop()
{
    // show the message in the serial monitor
    Serial.println("Hello world.");
    
    // wait 500 ms
    delay(500);
}

