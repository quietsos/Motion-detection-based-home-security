int led = 8;
int sensor = 5;
int state = LOW;
int val;



void setup() {                                                                                                 
  pinMode(led,OUTPUT);
  pinMode(sensor,INPUT);

  Serial.begin(9600);
}



void loop() {
  val = digitalRead(sensor);
//  Serial.print("Motion Value: ");
//  Serial.println(val);
  
  if(val == HIGH){
    digitalWrite(led,HIGH);
    Serial.println("23");
    delay(500);

//    if (state == LOW);{
//      Serial.println("Motion detected");
//      state = HIGH;
//    }
  }


  else{
    digitalWrite(led,LOW);
    delay(500);
//    if(state == HIGH){
//      Serial.println("The action/motion has stopped");
//
//      state = LOW;
//    }
  }
  delay(500);
}
