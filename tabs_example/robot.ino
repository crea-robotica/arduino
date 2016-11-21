/**
 * @brief Funcion para seleccionar los valores por defecto del robot.
 * @param id: identificador del robot.
 */
void seleccionar_robot(int id) {
    switch(id){
    case 1:
        MAX = 160;
        MIN = 0;
        PARADO_IZQ = 90;
        PARADO_DCHA = 90;
        break;
    case 2:
        MAX = 180;
        MIN = 0;
        PARADO_IZQ = 90;
        PARADO_DCHA = 90;
        break;
    }
}

