#define ADC_CH0 A0      //PB0
#define PUERTO_SALIDA 0b00000010 //0=ENTRADA, 1=SALIDA
#define PWM_MOT_1 9

void setup() {
  DDRB = PUERTO_SALIDA; //Configura como salida PB1
  Serial.begin(9600);
  pinMode(ADC_CH0,INPUT); //Terminal ADC_CHO como entrada
}

void loop() {
  int voltaje_16 = analogRead(ADC_CH0);
  analogWrite(PWM_MOT_1,voltaje_16/4);
  Serial.println(voltaje_16);
      delay(250);
}
