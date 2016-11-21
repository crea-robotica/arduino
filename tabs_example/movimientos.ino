// aqui puedes encontrar las funciones para mover el robot

/**
 * @brief Funcion para parar el robot.
 * @param tiempo: el tiempo que tiene que estar parado.
 */
void parar(int tiempo){
    servo_izq.write(PARADO_IZQ);
    servo_dcha.write(PARADO_DCHA);
    delay(tiempo);
}

/**
 * @brief Funcion para mover el robot hacia adelante.
 * @param tiempo: el tiempo que tiene que estar moviendose.
 */
void mover_recto(int tiempo){
    servo_izq.write(MAX);
    servo_dcha.write(MIN);
    delay(tiempo);
}

/**
 * @brief Funcion para mover el robot hacia atras.
 * @param tiempo: el tiempo que tiene que estar moviendose.
 */
void mover_atras(int tiempo){
    servo_izq.write(MIN);
    servo_dcha.write(MAX);
    delay(tiempo);
}

/**
 * @brief Funcion para mover el robot hacia la derecha.
 * @param tiempo: el tiempo que tiene que estar girando.
 */
void mover_derecha(int tiempo){
    servo_izq.write(MAX);    
    servo_dcha.write(MAX);
    delay(tiempo);
}

/**
 * @brief Funcion para mover el robot hacia la izquierda.
 * @param tiempo: el tiempo que tiene que estar girando.
 */
void mover_izquierda(int tiempo){
    servo_izq.write(MIN);
    servo_dcha.write(MIN);
    delay(tiempo);
}


