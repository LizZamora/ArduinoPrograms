#define LED_R 13   //PB5
#define SW1 0      //PD0
void setup() {
  pinMode(LED_R, OUTPUT);
  pinMode(SW1,INPUT); //También podemos usar la Res pullup dentro del circuito con INPUT_PULLUPS
}

void loop() {
  if(digitalRead(SW1) == 0)
    {
     digitalWrite(LED_R, HIGH);
    }else
    {
     digitalWrite(LED_R, LOW);
    } 
}
