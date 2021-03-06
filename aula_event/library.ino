// Debido a la simetria en espejo de la posicion de los servos
// el valor para ir recto debe ser el inverso 
// y el valor para girar cada servo en direccion contraria debe ser el mismo

Servo servo_izq, servo_dcha;

int pin_servo_izq = 9;
int pin_servo_dcha = 10;

int MAX = 180;
int MIN = 0;
int PARADO_IZQ = 90;
int PARADO_DCHA = 90;

void setup() 
{ 
  servo_izq.attach(pin_servo_izq);
  servo_dcha.attach(pin_servo_dcha);
  
  switch(ROBOT){
    case 1:
      MAX = 160;
      MIN = 0;
      PARADO_IZQ = 90;
      PARADO_DCHA = 90;
      break;
    case 2:
      MAX = 180;
      MIN = 0;
      PARADO_IZQ = 92;
      PARADO_DCHA = 91;
      break;;
    case 3:
      MAX = 180;
      MIN = 0;
      PARADO_IZQ = 92;
      PARADO_DCHA = 91;
      break;;
    case 4:
      MAX = 180;
      MIN = 0;
      PARADO_IZQ = 92;
      PARADO_DCHA = 90;
      break;
    case 5:
      MAX = 180;
      MIN = 0;
      PARADO_IZQ = 90;
      PARADO_DCHA = 90;
      break;
    case 6:
      MAX = 180;
      MIN = 0;
      PARADO_IZQ = 90;
      PARADO_DCHA = 90;
      break;
    }
}

void mover_atras(int tiempo){
  servo_izq.write(MIN);
  servo_dcha.write(MAX);
  set_time(tiempo);
}

void mover_derecha(int tiempo){
  servo_izq.write(MAX);
  servo_dcha.write(MAX);
  set_time(tiempo);
}

void mover_izquierda(int tiempo){
  servo_izq.write(MIN);
  servo_dcha.write(MIN);
  set_time(tiempo);
}

void mover_recto(int tiempo){
  servo_izq.write(MAX);
  servo_dcha.write(MIN);
  set_time(tiempo);
}

void parar(int tiempo){
  servo_izq.write(PARADO_IZQ);
  servo_dcha.write(PARADO_DCHA);
  set_time(tiempo);
}

void set_time(int time) {
    delay(time * 1000);
}

