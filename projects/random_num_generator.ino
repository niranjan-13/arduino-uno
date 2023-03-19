int dt =20;
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int readPin = 12;
int val;
int state;
int ran;
int max;
int min;
String msg1 = "Enter any min : ";
String msg2 = "Enter any max : ";



void setup() {
 pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  Serial.begin(9600);
  pinMode(readPin,INPUT);
  

}

void loop() {
  
val=digitalRead(readPin)  ;
Serial.println(val);
  delay(300);
Serial.println(msg1);
  delay(300);

  
 while(Serial.available() == 0)
 {
 }
    min = Serial.parseInt();
    delay(50);
Serial.println(min);
  delay(50);

 Serial.println(msg2);
  delay(50); 
 while(Serial.available() == 0)
 {
 }
    max = Serial.parseInt();
    delay(50);
Serial.println(max);
    
  ran = random(min,max);
;
  if(ran>0 && ran<=9 )
  {
  state = 0;
  }
  
  if (state == 0){
if(val== 0 && ran==0)
{zero();
 delay(dt);
}
  if(val== 0 && ran==1)
{one();
 delay(dt);
}
  else if(val== 0 &&ran==2)
{two();
 delay(dt);
 
}
  else if(val== 0 &&ran==3)
{three();
 delay(dt);
}
  else if(val== 0 &&ran==4)
{four();
 delay(dt);
}
  else if(val== 0 && ran==5)
{five();
 delay(dt);
}
  else if(val== 0 && ran==6)
{six();
 delay(dt);

}
  else if(val== 0 && ran==7)
{seven();
 delay(dt);
}
  else if(val== 0 && ran==8)
{eight();
 delay(dt);
}
   else if(val== 0 && ran==9)
{nine();
 delay(dt);
}
 
  }  
 
}
void one()
{
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(a,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);

  
  
  }
void two()
{
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(a,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,0);

  
  
  }
void three()
{
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(a,0);
  digitalWrite(d,0);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,0);

  
  
  }
void four()
{
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(a,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);
  
  
  }
void five()
{
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(a,0);
  digitalWrite(d,0);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);

  
  
  }
void six()
{
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(a,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);

  
  
  }
void seven()
{
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(a,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);

  
  
  }
void eight()
{
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(a,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);

  
  
  }
void nine()
{
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(a,0);
  digitalWrite(d,0);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);

  
  
  }
void zero()
{
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(a,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,1);

  
  
  }