//LED_Push_Button
int count =2;

void setup(){
  pinMode(7,INPUT);
  pinMode(13,OUTPUT);
  }
  
void loop(){
    if(digitalRead(7)==HIGH){
      delay(500);
      count++;
      }
      
    if(count%2==0){
      digitalWrite(13,HIGH);
      }
    if(count%2!=0){
      digitalWrite(13,LOW);
      }     
}
