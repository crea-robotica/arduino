/**
 * @author (tu nombre)
 * @email (tu email)
 * @copyright (tu centro)
 * @license (tu licencia)
 */

#include <Servo.h>

// define el numero de robot
int ROBOT = 1;

// constantes servomotores (configurar!)
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

// aqui puedes encontrar las funciones para mover el robot

/**
 * @brief Funcion para parar el robot.
 * @param tiempo: el tiempo que tiene que estar parado.
 */
void parar(int tiempo){
    // rellenar
}

/**
 * @brief Funcion para mover el robot hacia adelante.
 * @param tiempo: el tiempo que tiene que estar moviendose.
 */
void mover_recto(int tiempo){
    // rellenar
}

/**
 * @brief Funcion para mover el robot hacia atras.
 * @param tiempo: el tiempo que tiene que estar moviendose.
 */
void mover_atras(int tiempo){
    // rellenar
}

/**
 * @brief Funcion para mover el robot hacia la derecha.
 * @param tiempo: el tiempo que tiene que estar girando.
 */
void mover_derecha(int tiempo){
    // rellenar
}

/**
 * @brief Funcion para mover el robot hacia la izquierda.
 * @param tiempo: el tiempo que tiene que estar girando.
 */
void mover_izquierda(int tiempo){
    // rellenar
}

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
    /* Funciones posibles:
     *   1- parar()
     *   2- mover_recto()
     *   3- mover_atras()
     *   4- mover_izquierda()
     *   5- mover_derecha()
     */

    // pon aqui los movimientos a realizar
    parar(2);
}

