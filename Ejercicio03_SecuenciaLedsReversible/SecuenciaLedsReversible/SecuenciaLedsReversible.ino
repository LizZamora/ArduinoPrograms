#define SW1 8      //PB0
#define PUERTO_SALIDA 0XFF
#define CONT_EDO_INI_DER 0X01
#define CONT_EDO_INI_IZQ 0X80
#define CONT_OVF 0X00

void setup() {
  DDRD= PUERTO_SALIDA; //Configura como salidas todas las terminales del Puerto D
  pinMode(SW1,INPUT_PULLUP); //Terminal SW1 como entrada
}

void loop() {
  bool estadoSwitch = false;
  byte contadorAnillo = CONT_EDO_INI_DER;
  
  while(1)
  {
    if(digitalRead(SW1) == 0)
    {
      if(estadoSwitch == false)
      {
        estadoSwitch = true;
      }else
      {
        estadoSwitch = false;
      }
    }
    
    if(estadoSwitch == false)
    {
      contadorAnillo = contadorAnillo << 1;
        if(contadorAnillo == CONT_OVF)
        {
          contadorAnillo = CONT_EDO_INI_DER;
        }
     }else
     {
      contadorAnillo = contadorAnillo >> 1;
        if(contadorAnillo == CONT_OVF)
        {
          contadorAnillo = CONT_EDO_INI_IZQ;
        }
    }
    PORTD = contadorAnillo;
      delay(250);
    }
}
