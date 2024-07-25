int ledpin =12;
int signalpin =7;
void setup(){
Serial.begin(9600);
pinMode (signalpin,INPUT);
}
void loop(){
if(digitalRead(signalpin)==LOW){
Serial.println("obstacle present right now")
digitalWrite(ledpin,HIGH);
}else{
Serial.println("no obstacle");
digitalWrite(ledpin,LOW);
delay(1000);
}
}
