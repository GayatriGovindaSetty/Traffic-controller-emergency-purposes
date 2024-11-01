int r1= 3;
int g1 = 2;
int r2= 6;
int g2 = 5;
int r3 = 11;
int g3 = 10;
int r4= 13;
int g4= 12;

void setup()
{
Serial.begin(9600);  
pinMode (r1, OUTPUT);
pinMode (g1, OUTPUT);
pinMode (r2, OUTPUT);
pinMode (g2, OUTPUT);
pinMode (r3, OUTPUT);
pinMode (g3, OUTPUT);
pinMode (r4, OUTPUT);
pinMode (g4, OUTPUT);
}
int i=0,c=0,s=0;
void loop() 
{ 
  for(i=c;i<=100;i++)
  {
    if (Serial.available() > 0)
    {
      c=i;
      break;
    }
    if(i<=25)
    {
      digitalWrite(r1, LOW);
      digitalWrite(g1, HIGH);
      digitalWrite(r2, HIGH);
      digitalWrite(r3, HIGH);
      digitalWrite(r4, HIGH);
      delay(1000);
    }
    if((i>25)&&(i<=50))
    {
      digitalWrite(g1, LOW);
      digitalWrite(r1, HIGH);
      digitalWrite(r2, LOW);
      digitalWrite(g2, HIGH);
      digitalWrite(r3, HIGH);
      digitalWrite(r4, HIGH);
      delay(1000);
    }
    if((i>50)&&(i<=75))
    {
      digitalWrite(r1, HIGH);
      digitalWrite(g2, LOW);
      digitalWrite(r2, HIGH);
      digitalWrite(r3, LOW);
      digitalWrite(g3, HIGH);
      digitalWrite(r4, HIGH);
      delay(1000);
    }
    if(i>75)
    {
      digitalWrite(r1, HIGH);
      digitalWrite(r2, HIGH);
      digitalWrite(g3, LOW);
      digitalWrite(r3, HIGH);
      digitalWrite(r4, LOW);
      digitalWrite(g4, HIGH);
      delay(1000);
    }  
  }
  
   s=Serial.read(); 
   if(s=='1')
   {
      digitalWrite(g2, LOW);
      digitalWrite(g3, LOW);
      digitalWrite(g4, LOW);
      digitalWrite(g1, HIGH);
      digitalWrite(r2, HIGH);
      digitalWrite(r3, HIGH);
      digitalWrite(r4, HIGH);
      delay(25000);
      digitalWrite(g1, LOW);
    }
   if(s=='2')
    {
      digitalWrite(g1, LOW);
      digitalWrite(g3, LOW);
      digitalWrite(g4, LOW);
      digitalWrite(r1, HIGH);
      digitalWrite(r2, LOW);
      digitalWrite(g2, HIGH);
      digitalWrite(r3, HIGH);
      digitalWrite(r4, HIGH);
      delay(25000);
      digitalWrite(g2, LOW);
    }
   if(s=='3')
    {
      digitalWrite(g2, LOW);
      digitalWrite(g1, LOW);
      digitalWrite(g4, LOW);
      digitalWrite(r1, HIGH);
      digitalWrite(g2, LOW);
      digitalWrite(r2, HIGH);
      digitalWrite(r3, LOW);
      digitalWrite(g3, HIGH);
      digitalWrite(r4, HIGH);
      delay(25000); 
      digitalWrite(g3, LOW);
    }
   if(s=='4')
     {
      digitalWrite(g2, LOW);
      digitalWrite(g3, LOW);
      digitalWrite(g1, LOW);
      digitalWrite(r1, HIGH);
      digitalWrite(r2, HIGH);
      digitalWrite(g3, LOW);
      digitalWrite(r3, HIGH);
      digitalWrite(r4, LOW);
      digitalWrite(g4, HIGH);
      delay(25000);
      digitalWrite(g4, LOW);
    }  
}



#include<SoftwareSerial.h>
int r1= 3;
int g1 = 2;
int r2= 6;
int g2 = 5;
int r3 = 11;
int g3 = 10;
int r4= 13;
int g4= 12;
SoftwareSerial bt(2,3);
void setup()
{
bt.begin(9600);
Serial.begin(9600);  
pinMode (r1, OUTPUT);
pinMode (g1, OUTPUT);
pinMode (r2, OUTPUT);
pinMode (g2, OUTPUT);
pinMode (r3, OUTPUT);
pinMode (g3, OUTPUT);
pinMode (r4, OUTPUT);
pinMode (g4, OUTPUT);
}
int i=0,c=0,s=0;
void loop() 
{ 
  for(i=c;i<=100;i++)
  {
    if (bt.available() > 0)
    {
      c=i;
      break;
    }
    if(i<=25)
    {
      digitalWrite(r1, LOW);
      digitalWrite(g1, HIGH);
      digitalWrite(r2, HIGH);
      digitalWrite(r3, HIGH);
      digitalWrite(r4, HIGH);
      delay(1000);
    }
    if((i>25)&&(i<=50))
    {
      digitalWrite(g1, LOW);
      digitalWrite(r1, HIGH);
      digitalWrite(r2, LOW);
      digitalWrite(g2, HIGH);
      digitalWrite(r3, HIGH);
      digitalWrite(r4, HIGH);
      delay(1000);
    }
    if((i>50)&&(i<=75))
    {
      digitalWrite(r1, HIGH);
      digitalWrite(g2, LOW);
      digitalWrite(r2, HIGH);
      digitalWrite(r3, LOW);
      digitalWrite(g3, HIGH);
      digitalWrite(r4, HIGH);
      delay(1000);
    }
    if(i>75)
    {
      digitalWrite(r1, HIGH);
      digitalWrite(r2, HIGH);
      digitalWrite(g3, LOW);
      digitalWrite(r3, HIGH);
      digitalWrite(r4, LOW);
      digitalWrite(g4, HIGH);
      delay(1000);
    }  
  }
  
   s=Serial.read(); 
   if(s=='1')
   {
      digitalWrite(g2, LOW);
      digitalWrite(g3, LOW);
      digitalWrite(g4, LOW);
      digitalWrite(g1, HIGH);
      digitalWrite(r2, HIGH);
      digitalWrite(r3, HIGH);
      digitalWrite(r4, HIGH);
      delay(25000);
      digitalWrite(g1, LOW);
    }
   if(s=='3')
    {
      digitalWrite(g1, LOW);
      digitalWrite(g3, LOW);
      digitalWrite(g4, LOW);
      digitalWrite(r1, HIGH);
      digitalWrite(r2, LOW);
      digitalWrite(g2, HIGH);
      digitalWrite(r3, HIGH);
      digitalWrite(r4, HIGH);
      delay(25000);
      digitalWrite(g2, LOW);
    }
   if(s=='5')
    {
      digitalWrite(g2, LOW);
      digitalWrite(g1, LOW);
      digitalWrite(g4, LOW);
      digitalWrite(r1, HIGH);
      digitalWrite(g2, LOW);
      digitalWrite(r2, HIGH);
      digitalWrite(r3, LOW); 
      digitalWrite(g3, HIGH);
      digitalWrite(r4, HIGH);
      delay(25000); 
      digitalWrite(g3, LOW);
    }
   if(s=='7')
     {
      digitalWrite(g2, LOW);
      digitalWrite(g3, LOW);
      digitalWrite(g1, LOW);
      digitalWrite(r1, HIGH);
      digitalWrite(r2, HIGH);
      digitalWrite(g3, LOW);
      digitalWrite(r3, HIGH);
      digitalWrite(r4, LOW);
      digitalWrite(g4, HIGH);
      delay(25000);
      digitalWrite(g4, LOW);
    }  
}