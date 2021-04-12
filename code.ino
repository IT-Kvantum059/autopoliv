int val;
int a = 12;
constexpr auto pinSensor = A0;
void setup()
{
  Serial.begin(9600);
  pinMode(a, OUTPUT);
  //digitalWrite(a, HIGH);
}
void loop()
{
  int valueSensor = analogRead(pinSensor);
  Serial.println(valueSensor);
  delay(100);

  if (Serial.available())
  {  
    val = Serial.read();    
    if (val == '1')
    {
      digitalWrite(a, HIGH);
    }
    if ( val == '0')
    {
      digitalWrite(a, LOW);
    }
    
  }
  else 
  {  
    if (valueSensor <150) 
    {
    digitalWrite (a, HIGH);
    //delay (1000); 
    }
    else{  
    digitalWrite(a, LOW);
    }
  }
}    
    
