/**
 * @author Raul Perula-Martinez
 * @email raul.perula@crea-robotica.com
 * @copyright CREA Robotica Educativa
 * @license CC (reconocimiento - compartir igual)
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
boolean flag = false;

/**
 * @brief Funcion de configuracion.
 */
void setup() 
{ 
    servo_izq.attach(PIN_IZQ);
    servo_dcha.attach(PIN_DER);

    seleccionar_robot(ROBOT);
}

/**
 * @brief Funcion principal.
 */
void loop()
{ 
   /* Funciones posibles:
        1- parar
        2- mover_recto
        3- mover_atras
        4- mover_izquierda
        5- mover_derecha
    */
    
    // poner aqui los movimientos a realizar
    
    mover_recto(2);
}

