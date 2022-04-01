#include <Servo.h>


int valor;
int valor2;
int valor3;

Servo servo_pin3;


void setup()
{
  servo_pin3.attach(3);
  pinMode(2, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,INPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop()
{
  valor=digitalRead(2);
  
      if(valor==HIGH)
      {
        servo_pin3.write(100);  
      }
      else
      {
        servo_pin3.write(0);
        
      }
  
    valor2=digitalRead(6);
    
      if(valor2==HIGH)
      {
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      }
      else
      {
        digitalWrite(5, HIGH);
        digitalWrite(4, LOW);
      }

       valor3=digitalRead(10);
    
      if(valor3==HIGH)
      {
        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
      }
      else
      {
        digitalWrite(8, HIGH);
        digitalWrite(9, LOW);
      }
  
         valor3 = digitalRead(10);
         valor2 = digitalRead(6);
        if (valor3==HIGH && valor2==HIGH)
        {
        digitalWrite(11, HIGH);
        
        digitalWrite(12, LOW);
       
        digitalWrite(13, LOW);
        
       
        }
        
        if (valor3==LOW && valor2==LOW)
      
       {
        digitalWrite(11, LOW);
        
        digitalWrite(12, LOW);
      
        digitalWrite(13, HIGH);

        servo_pin3.write(100);
       }
       if (valor3==HIGH && valor2==LOW)
        {
        digitalWrite(11, HIGH);
        
        digitalWrite(12, LOW);
       
        digitalWrite(13, LOW);
        
       
        }
        if (valor2==HIGH && valor3==LOW)
        {
        digitalWrite(11, HIGH);
        
        digitalWrite(12, LOW);
       
        digitalWrite(13, LOW);
        
       
        }
        delay(100);
}
