#define ADC_CH0 A0      //PB0

void setup() {
  Serial.begin(9600);
  pinMode(ADC_CH0,INPUT); //Terminal ADC_CHO como entrada
}

void loop() {
  int voltaje_16 = analogRead(ADC_CH0);
  Serial.println(voltaje_16);
      delay(250);
}
