#include "serial_tank.h"
#include "Arduino.h"
#include "main.h"

unsigned int volume_value;
unsigned char valueh, valuel;

void init_serial_tank(void) 
{
    Serial.begin(19200);
    Serial.write(0xFF); //sincroniza comunicação
    Serial.write(0xFF);
    Serial.write(0xFF);   
}

unsigned int volume(void)
{

   //	sendindg command to request volume of water 
 Serial.write(VOLUME);
 
    while(!Serial.available());
    // reading Higher byte
    valueh = Serial.read();
    while(!Serial.available());
    // reding Lower byte here
    valuel = Serial.read();
    volume_value = (valueh << 8) | valuel;	
    
    return volume_value; 
}
void enable_inlet(void)
{

    
}  
void disable_inlet(void)
{
    
}  
void enable_outlet(void)
{  
    
}
void disable_outlet(void)
{  
    
}
