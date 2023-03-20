int state=0;
int i;
int k;
void setup() {
  // put your setup code here, to run once
for(i=2;i<9;i++){
  pinMode(i,OUTPUT);
}
pinMode(9,INPUT);
}
void loop() 
{
  k=digitalRead(9);
  delay(500);
  if(digitalRead(9)==1){
    state=state+1;
  }
  if(state==0){
  zerop();
  delay(500);}
  if(state==1){
  one();
  delay(500);}
  if(state==2){
  two();
  delay(500);}
  if(state==3){
  three();
  delay(500);}
  if(state==4){
  four();
  delay(500);}
  if(state==5){
  five();
  delay(500);}
  if(state==6){
  six();
  delay(500);}
  if(state==7){
  seven();
  delay(500);}
  if(state==8){
  eight();
  delay(500);}
  if(state==9){
  nine();
  delay(500);}
  if(state==10)
  {
    state=0;
  }
}


void one()
{
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,1);
  digitalWrite(6,1);
  digitalWrite(7,1);
  digitalWrite(8,1);
}



void two(){
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,1);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,1);
  digitalWrite(8,0);
}
void three(){
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,1);
  digitalWrite(7,1);
  digitalWrite(8,0);
};
void four(){
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,1);
  digitalWrite(6,1);
  digitalWrite(7,0);
  digitalWrite(8,0);
}
void five(){
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,1);
  digitalWrite(7,0);
  digitalWrite(8,0);
}
void six(){
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,0);
  digitalWrite(8,0);
}
void seven(){
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,1);
  digitalWrite(6,1);
  digitalWrite(7,1);
  digitalWrite(8,1);
}
void eight(){
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,0);
  digitalWrite(8,0);
}
void nine(){
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,1);
  digitalWrite(7,0);
  digitalWrite(8,0);
}

void zero()
{
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,0);
  digitalWrite(8,1);
}
