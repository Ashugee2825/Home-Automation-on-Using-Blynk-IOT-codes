#define LED 3

void setup() {
  // put your setup code here, to run once:
pincode(LED ,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (i =0; i < 256; i++);
  {
    analogwrite(LED,i);
    delay(100);
  } 
}
