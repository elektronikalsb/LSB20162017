#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {

  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(13,INPUT);
  pinMode(A1,INPUT);
  
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
}

void loop() {
int MEhorno = digitalRead(6);
int FCHint = digitalRead(7);
int MShorno = digitalRead(8);
int MSHcorona = digitalRead(9);
int FCsierra = digitalRead(10);
int FCcinta = digitalRead(13);
int MAcorona = digitalRead(A1);
  

 if (MEhorno == LOW && FCHint == LOW && MShorno == LOW && MSHcorona == LOW && FCsierra == LOW && FCcinta == LOW && MAcorona == LOW) {    
      lcd.setCursor(0,1);
      lcd.print("Esperando Pieza ");
      lcd.setCursor(0,0);
      lcd.print("                ");
      delay(500);     
  }else if (MEhorno == HIGH && FCHint == LOW && MShorno == LOW && MSHcorona == LOW && FCsierra == LOW && FCcinta == LOW && MAcorona == LOW) {    
      lcd.setCursor(0,1);
      lcd.print("Metiendo Pieza  ");
      lcd.setCursor(0,0);
      lcd.print("                ");
      delay(500);     
  }else if (MEhorno == LOW && FCHint == HIGH && MShorno == LOW && MSHcorona == LOW && FCsierra == LOW && FCcinta == LOW && MAcorona == LOW) {    
      lcd.setCursor(0,1);
      lcd.print("Horneando Pieza ");
      lcd.setCursor(0,0);
      lcd.print("                ");
      delay(500);
  }else if (MEhorno == LOW && FCHint == LOW && MShorno == HIGH && MSHcorona == LOW && FCsierra == LOW && FCcinta == LOW && MAcorona == LOW) {    
      lcd.setCursor(0,1);
      lcd.print("Sacando Pieza    ");
      lcd.setCursor(0,0);
      lcd.print("                ");
      delay(500);

           
  }else if (MEhorno == LOW && FCHint == LOW && MShorno == LOW && MSHcorona == HIGH && FCsierra == LOW && FCcinta == LOW && MAcorona == LOW) {    
      lcd.setCursor(0,1);
      lcd.print("Pieza Dejada    ");
      lcd.setCursor(0,0);
      lcd.print("                ");
      delay(500);     
  }else if (MEhorno == LOW && FCHint == LOW && MShorno == LOW && MSHcorona == LOW && FCsierra == HIGH && FCcinta == LOW && MAcorona == LOW) {    
      lcd.setCursor(0,1);
      lcd.print("Cortando Pieza  ");
      lcd.setCursor(0,0);
      lcd.print("                ");
      delay(500);     
  }else if (MEhorno == LOW && FCHint == LOW && MShorno == LOW && MSHcorona == LOW && FCsierra == LOW && FCcinta == HIGH && MAcorona == LOW) {    
      lcd.setCursor(0,0);
      lcd.print("Pieza en Cinta  ");
      lcd.setCursor(0,1);
      lcd.print("Pieza Finalizada");
      delay(500);    
  }else if (MEhorno == LOW && FCHint == LOW && MShorno == LOW && MSHcorona == LOW && FCsierra == LOW && FCcinta == LOW && MAcorona == HIGH) {    
      lcd.setCursor(0,1);
      lcd.print("Moviendo Pieza  ");
      lcd.setCursor(0,0);
      lcd.print("                ");
      delay(500);     
  }   
  
}
