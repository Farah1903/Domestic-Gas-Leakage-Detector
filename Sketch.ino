#include <Servo.h>

//#include <Servo.h>
//#include <LiquidCrystal.h>

//LiquidCrystal lcd(3,2,4,5,6,7);
Servo test1;

#define lpg_sensor A0
#define Buzzer 13

void setup() 
{
  Serial.begin(9600);
  pinMode(lpg_sensor,INPUT);
  pinMode(Buzzer,OUTPUT);
//  lcd.begin(16,2);
//  lcd.print("LPG Gas Detector");
//  lcd.setCursor(0,1);
//  lcd.print("circuit Digest");
//  delay(2000);
  pinMode(8,OUTPUT);
  test1.attach(8);
}

void loop()
{
int gas_value=analogRead(A0);
  Serial.println(gas_value);
  if(gas_value>700)
  {
    digitalWrite(13,HIGH);
   test1.write(90); 
   delay(1000);
   }
    else
    {
       digitalWrite(13,LOW);
      test1.write(0);
      delay(1000);
      
    }
    







  
//  if(digitalRead(lpg_sensor))
//  {
//    digitalWrite(Buzzer,HIGH);
//    lcd.clear();
//    lcd.print("LPG gas leakage");
//    lcd.setCursor(0,1);
//    lcd.print("Alert");
//    delay(400);
//    digitalWrite(Buzzer,LOW);
//    delay(500);
//    
//  }
//  else
//  {
//    digitalWrite(Buzzer,LOW);
//    lcd.clear();
//    lcd.print("No LPG gas");
//    lcd.setCursor(0,1);
//    lcd.print("Leakage");
//    delay(1000);
//    
//  }
//    
  }
  
