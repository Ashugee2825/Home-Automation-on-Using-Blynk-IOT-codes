#define INLET_VALVE     0x00
#define OUTLET_VALVE    0X01

#define ENABLE       0x01
#define DISABLE      0x00



void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(19200);

}



void loop() 
{
  // put your main code here, to run repeatedly:

/*selecting inlet value*/
Serial.write(INLET_VALVE);
Serial.write(ENABLE);

delay(10000);


Serial.write(INLET_VALVE);
Serial.write(DISABLE);


delay(10000);


}
