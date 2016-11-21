/**
 * @author (tu nombre)
 * @email (tu email)
 * @copyright (tu centro)
 * @license (tu licencia)
 */

#include <Servo.h>

// define el numero de robot
int ROBOT = 1;

// constantes servomotores
int MAX = 180;
int MIN = 0;
int PARADO_IZQ = 90;
int PARADO_DCHA = 90;
int PIN_IZQ = 9;
int PIN_DER = 10;

// variables servomotores
Servo servo_izq, servo_dcha;

// otras variables


/**
 * @brief Funcion de configuracion.
 */
void setup() 
{ 
    servo_izq.attach(PIN_IZQ);
    servo_dcha.attach(PIN_DER);
}

/**
 * @brief Funcion principal.
 */
void loop()
{
    // poner aqui los movimientos a realizar

    servo_izq.write(PARADO_IZQ);
    servo_dcha.write(PARADO_DCHA);
    delay(1000);
}


