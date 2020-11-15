char charRecibido = 0; //variable global
void setup() {
  DDRB = 0b00001111;    //PB0:PB3 como salida y PB4:PB7 como entrada
  Serial.begin(9600);
}

void loop() {
  
  if(Serial.available() > 0)
  {
    charRecibido = Serial.read();
    Serial.print("Caracter recibido: ");
    Serial.println(charRecibido);
    switch(charRecibido)
    {
      case 'b': PORTB = 0b00001000 ^ PORTB;   //Led azul
        break;
      case 'g': PORTB = 0b00000100 ^ PORTB;   //Led verde
        break;
      case 'r': PORTB = 0b00000010 ^ PORTB;   //Led rojo
        break;
      case 'y': PORTB = 0b00000001 ^ PORTB;   //Led amarillo
        break;
    }
  }
}
