int EN2 = 3;
int IN3 = 4;
int IN4 = 5;

int EN1 = 9;
int IN1 = 10;
int IN2 = 11;

void setup()
{
  pinMode (EN1, OUTPUT);    // enable 1
  pinMode (EN2, OUTPUT);    // enable 2
  pinMode (IN1, OUTPUT);    // entrada 1
  pinMode (IN2, OUTPUT);    // entrada 2
  pinMode (IN3, OUTPUT);    // entrada 3
  pinMode (IN4, OUTPUT);    // entrada 4
  Serial.begin(9600);
}
void loop()
{
  // Motor gira en un sentido
  int x = 0;
  analogWrite(EN1, x);
  analogWrite(EN2, x);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  
  //*
  for(int i = 0; i < 256; i+=5) {
    analogWrite(EN1, i);
    analogWrite(EN2, i);
    Serial.println(i);
    delay(500);
  }
  //*/
  analogWrite(EN1, 0);
  analogWrite(EN2, 0);
  delay(5000);
  
  
  // Motor no gira
  // digitalWrite (IN4, LOW); 
  // delay(1000);
  // Motor gira en sentido inverso
  // digitalWrite (IN3, HIGH);
  // delay(5000);
  // Motor no gira
  // digitalWrite (IN3, LOW); 
  // delay(1000);
}
