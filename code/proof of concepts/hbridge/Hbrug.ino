int IN1 = 3; 
int IN2 = 11;
int IN3 = 9; 
int IN4 = 10;

const int drukknop = 2;
bool toestand_drukknop; 

void setup() {
  Serial.begin(9600); 

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  //pinMode(drukknop, INPUT);
  
}

void loop() {

  //toestand_drukknop = digitalRead(drukknop); 
  toestand_drukknop = HIGH;

  if (toestand_drukknop == HIGH) 
  {

    //Voorwaarts 
    Serial.println("Voorwaarts Versnelling");
    for(int i = 0; i <= 255; i++) 
    {
      analogWrite(IN1, i);
      analogWrite(IN2, 0);
      analogWrite(IN3, i);
      analogWrite(IN4, 0);
      delay(20);
    }
    delay(3000);
    
    Serial.println("Voorwaarts Vertraging");
    for(int i = 255; i >= 0; i--) 
    { 
      analogWrite(IN1, i);
      analogWrite(IN2, 0);
      analogWrite(IN3, i);
      analogWrite(IN4, 0);
    }
    delay(3000); 

    //Achterwaarts  
    Serial.println("Achterwaarts Versnelling");
    for(int i = 0; i <= 255; i++) 
    {
      analogWrite(IN1, 0);
      analogWrite(IN2, i);
      analogWrite(IN3, 0);
      analogWrite(IN4, i);
      delay(20);
    }
    delay(3000);
    
    Serial.println("Achterwaarts Vertraging");
    for(int i = 255; i >= 0; i--) 
    { 
      analogWrite(IN1, 0);
      analogWrite(IN2, i);
      analogWrite(IN3, 0);
      analogWrite(IN4, i);
    }
    delay(3000); 

    //Motor rechts  
    Serial.println("Rechts Versnelling");
    for(int i = 0; i <= 255; i++) 
    {
      analogWrite(IN1, i);
      analogWrite(IN2, 0);
      analogWrite(IN3, 0);
      analogWrite(IN4, 0);
      delay(20);
    }
    delay(3000);

    Serial.println("Rechts Vertraging");
    for(int i = 255; i >= 0; i--) 
    { 
      analogWrite(IN1, i);
      analogWrite(IN2, 0);
      analogWrite(IN3, 0);
      analogWrite(IN4, 0);
    }
    delay(3000); 

        //Motor links  
    Serial.println("Links Versnelling");
    for(int i = 0; i <= 255; i++) 
    {
      analogWrite(IN1, 0);
      analogWrite(IN2, 0);
      analogWrite(IN3, i);
      analogWrite(IN4, 0);
      delay(20);
    }
    delay(3000);
    
    Serial.println("Links Vertraging");
    for(int i = 255; i >= 0; i--) 
    { 
      analogWrite(IN1, 0);
      analogWrite(IN2, 0);
      analogWrite(IN3, i);
      analogWrite(IN4, 0);
    }
    delay(3000); 
  
  }
}
