# define switchPin 2

# define moveU A2
# define moveF A3
# define moveD A4
# define moveB A5
# define mfp 9
# define mf1 10    
# define mf2 12
# define mbp 11 
# define mb1 14
# define mb2 15
# define mrp 3
# define mr1 5
# define mr2 4
# define mlp 6
# define ml1 7
# define ml2 8
# define value 235

void setup() {
  Serial.begin(9600);
  pinMode(switchPin, INPUT_PULLUP);
  pinMode(moveU, INPUT_PULLUP);
  pinMode(moveF, INPUT_PULLUP);
  pinMode(moveD, INPUT_PULLUP);
  pinMode(moveB, INPUT_PULLUP);  
  pinMode(mfp,OUTPUT);
  pinMode(mf1,OUTPUT);
  pinMode(mf2,OUTPUT);
  pinMode(mbp,OUTPUT);
  pinMode(mb1,OUTPUT);
  pinMode(mb2,OUTPUT);
  pinMode(mrp,OUTPUT);
  pinMode(mr1,OUTPUT);
  pinMode(mr2,OUTPUT);
  pinMode(mlp,OUTPUT);
  pinMode(ml1,OUTPUT);
  pinMode(ml2,OUTPUT);
}

void loop() {
  //delay(1000);
  if(digitalRead(switchPin)==LOW)
  {
    Serial.println("NORMAL");
    if(digitalRead(moveU)==LOW)
  
  {
    Serial.println("U on   ");
    digitalWrite(mf1,HIGH);
    digitalWrite(mf2,LOW);
    analogWrite(mfp,value);
  }
  else
  {
    Serial.println("U off   ");
    digitalWrite(mf1,LOW);
    digitalWrite(mf2,LOW);
    analogWrite(mfp,value);
  }
   if(digitalRead(moveF)==LOW)
  {
    Serial.println("F on   ");
    digitalWrite(mr2,HIGH);
    digitalWrite(mr1,LOW);
    analogWrite(mrp,value);
  }
  else
  {
    Serial.println("F off   ");
    digitalWrite(mr1,LOW);
    digitalWrite(mr2,LOW);
    analogWrite(mrp,0);
  }
   if(digitalRead(moveD)==LOW)
  {
    Serial.println("D on   ");
    digitalWrite(mb1,HIGH);
    digitalWrite(mb2,LOW);
    analogWrite(mbp,value);
  }
  else
  {
    Serial.println("D off   ");
    digitalWrite(mb1,LOW);
    digitalWrite(mb2,LOW);
    analogWrite(mbp,0);
  } 
   if(digitalRead(moveB)==LOW)
  {
    Serial.println("B on   ");
    digitalWrite(ml2,HIGH);
    digitalWrite(ml1,LOW);
    analogWrite(mlp,value);
  }
  else
  {
    Serial.println("B off   ");
    digitalWrite(ml1,LOW);
    digitalWrite(ml2,LOW);
    analogWrite(mlp,0);
  }
  }
  else
  {
      Serial.println("OPPOSITE");
      if(digitalRead(moveU)==LOW)
  
  {
    Serial.println("U on   ");
    digitalWrite(mf2,HIGH);
    digitalWrite(mf1,LOW);
    analogWrite(mfp,value);
  }
  else
  {
    Serial.println("U off   ");
    digitalWrite(mf1,LOW);
    digitalWrite(mf2,LOW);
    analogWrite(mfp,0);
  }
   if(digitalRead(moveF)==LOW)
  {
    Serial.println("F on   ");
    digitalWrite(mr1,HIGH);
    digitalWrite(mr2,LOW);
    analogWrite(mrp,value);
  }
  else
  {
    Serial.println("F off   ");
    digitalWrite(mr1,LOW);
    digitalWrite(mr2,LOW);
    analogWrite(mrp,0);
  }
   if(digitalRead(moveD)==LOW)
  {
    Serial.println("D on   ");
    digitalWrite(mb2,HIGH);
    digitalWrite(mb1,LOW);
    analogWrite(mbp,255);
  }
  else
  {
    Serial.println("D off   ");
    digitalWrite(mb1,LOW);
    digitalWrite(mb2,LOW);
    analogWrite(mbp,0);
  } 
   if(digitalRead(moveB)==LOW)
  {
    Serial.println("B on   ");
    digitalWrite(ml1,HIGH);
    digitalWrite(ml2,LOW);
    analogWrite(mlp,value);
  }
  else
  {
    Serial.println("B off   ");
    digitalWrite(ml1,LOW);
    digitalWrite(ml2,LOW);
    analogWrite(mlp,0);
  }  
  }
}
