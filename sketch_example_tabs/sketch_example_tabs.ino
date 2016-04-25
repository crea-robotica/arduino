/**
 * @brief Complete sketch example with tabs
 * @author CREA Robotica Educativa
 * @license GPLv3
 *
 * https://crea-robotica.com/
 */

// includes
// example: #include <Servo.h>

// global variables 
int time_waiting = 500;
String msg = "Hello world.";

/**
 * @brief setup routine
 */
void setup()
{
    // open serial port to 9600 bps
    Serial.begin(9600);
    
    // empty serial port
    Serial.flush();
}

/**
 * @brief loop routine
 */
void loop()
{
    // using the function
    print_str(msg);
    
    // wait 500 ms
    delay(time_waiting);
}

