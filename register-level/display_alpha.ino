int i;
void setup(){
DDRD |= 0xFF;
}
void loop()
{
  unsigned char values[6] = {0x77,0x7F,0x39,0x3F,0x79,0x71};
  for(int i=0;i<6;i++)
  {
  PORTD = values[i];
  delay(1500);
  
  }

}