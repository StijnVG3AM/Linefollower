const int led = 12; 
char inputdata = 0;


void setup() {
    
    Serial.begin(9600);                   
    pinMode(led, OUTPUT); 
}

void loop() 
{

   if(Serial.available() > 0)     
   {
      inputdata = Serial.read();       
           
      if(inputdata == '0') 
      {
         digitalWrite(led, LOW);  
         Serial.print("led is uit\n");  
 
      }
         
      else if(inputdata == '1')  
      {      
         digitalWrite(led, HIGH);
         Serial.print("led is aan\n");  
      }
   }
}
