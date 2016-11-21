#include <Servo.h>

// Sustituir el numero por el que lleva cada robot
int ROBOT = 1;

/**
 * Funcion que se repite constantemente.
 */
void loop() 
{ 
    // funciones disponibles:
    //    - parar()
    //    - mover_recto()
    //    - mover_izquierda()
    //    - mover_derecha()
    //    - mover_atras()
    
    // este ejemplo para el robot durante 5 segs
    // luego mueve el robot hacia adelante durante 2 segundos
    // esto se repite constantemente
    parar(5);
    mover_recto(2);
} 

