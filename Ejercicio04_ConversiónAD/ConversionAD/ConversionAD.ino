#define ADC_CH0 A0      //PB0
#define PUERTO_SALIDA 0XFF //0=ENTRADA, 1=SALIDA

void setup() {
  DDRD = PUERTO_SALIDA; //Configura como salidas todas las terminales del Puerto D
  DDRB = 0b00000011;
  pinMode(ADC_CH0,INPUT); //Terminal ADC_CHO como entrada
}

void loop() {
  int voltaje_16 = analogRead(ADC_CH0);
    PORTD = voltaje_16;
    PORTB = voltaje_16 >> 8;
      delay(250);
}
