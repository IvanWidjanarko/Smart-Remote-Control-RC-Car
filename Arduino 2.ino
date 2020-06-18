#include <LiquidCrystal.h>
#include <Keypad.h>
#include <Wire.h>

int a=0, b=0, c=0, d=0;
int var=0;
int C1=8,C2=8,C3=8,C4=8;
char e='*';
int times=0,incorrect=0, correct = 0;
int warning=3;

LiquidCrystal lcd(8,9,10,11,12,13);

const byte ROWS= 4;
const byte COLS= 4;

char keys[ROWS][COLS]=
{
{'1', '2', '3', 'A'},
{'4', '5', '6', 'B'},
{'7', '8', '9', 'C'},
{'*', '0', '#', 'D'}
};

byte rowPins[ROWS]= {7,6,5,4};
byte colPins[COLS]= {3,2,1,0};
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup()
{
  Serial.begin(9600); //mulai serial begin
   Wire.begin(1);      //kasih alamat ke Arduino satu ini   
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  lcd.begin(0,2);
  lcd.print("Smart Car");
  lcd.setCursor(0,1);
  lcd.print("Kelompok 8B");
  delay(2000);
  lcd.clear();
}

void loop()
{
  char key = keypad.getKey();
  if (key){
   lcd.setCursor(6+var,1);
   lcd.print(key),lcd.setCursor(6+var,1),lcd.print(e);
   key=key-48; 
   var++; 
   switch(var){
    case 1:
    a=key;
    break;
    case 2:
    b=key; 
    break;
    case 3:
    c=key; 
    break;
    case 4:
    d=key; 
   delay(100);
  if(a==C1 && b==C2 && c==C3 && d==C4){
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Password");
    lcd.setCursor(0,1);
    lcd.print("Valid");
    correct = 1;
    digitalWrite(A0,HIGH);
    delay(1000); 
    lcd.clear();
    digitalWrite(A0,LOW);
    
    Wire.requestFrom(3, 1);    // request
    int c= Wire.read(); // menerima info dari slave
    Serial.println(c);         // print di serial monitor
    Wire.requestFrom(2,1); //meminta data dari slave arduino
    						//dengan alamat 2 sebanyak 1 byte
    int d = Wire.read();
   	Serial.println(d);		//untuk print di serial monitor
    
    
    if(c !=0 && d !=0){
    
      while(true){
    lcd.setCursor(0,0);
    lcd.print("Status Sensor: ");
    lcd.setCursor(0,1);
    lcd.print("aktif");
    delay(3000);
    lcd.clear();
      
    lcd.setCursor(0,0);
    lcd.print("Jarak Objek: ");
    lcd.setCursor(0,1);
    lcd.print(c);
    lcd.print("cm");
    delay(3000);
    lcd.clear();
      
    lcd.setCursor(0,0);
    lcd.print("Suhu : ");
    lcd.setCursor(0,1);
    lcd.print(d);
    lcd.print(" Celcius");
    delay(3000);
      }  
    }
  }
  else{
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Password");
    lcd.setCursor(0,1);
    lcd.print("Invalid");
    digitalWrite(A1,HIGH); 
    delay(1000); 
    lcd.clear();
    digitalWrite(A1,LOW); 
    }

  if(a==C1 && b==C2 && c==C3 && d==C4){
      times=0;
      warning=3;
    }
  else{
      times ++; 
      warning --; 
      lcd.setCursor(0,0);
      lcd.print("Opportunity Left"); 
      lcd.setCursor(0,1);
      lcd.print(warning); 
      lcd.setCursor(2,1);
      lcd.print("Times");
      delay(1000);
       if(warning==0){
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("ALARM");
          lcd.setCursor(0,1);
          lcd.print("ACTIVATED");
        }
      delay(300);lcd.clear();
      }

  while(times>=3){ 
      lcd.setCursor(0,0),lcd.print("ALERT");
      lcd.setCursor(0,1),lcd.print("INTRUDER");
      digitalWrite(A1,HIGH); 
      delay(500);
      lcd.clear();
      digitalWrite(A1,LOW);
      delay(500);
  }

   var=0;
   lcd.clear();

  break;
  }

 }
 if(correct == 0){lcd.setCursor(0,0),lcd.print("Insert Password");}
//untuk loop selama password yang dimasukan belum benar 
  delay(2);
}