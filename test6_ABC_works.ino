#if defined(ARDUINO) 
SYSTEM_MODE(SEMI_AUTOMATIC); 
#endif

const int buttonPin1 = D0;
const int buttonPin2 = D1;
const int buttonPin3 = D2;
const int buttonPin4 = D3;
const int buttonPin5 = D4;
int buttonState1;
int buttonState2;
int buttonState3;
int buttonState4;
int buttonState5;
int lastButtonState1 = LOW;
int lastButtonState2 = LOW;
int lastButtonState3 = LOW;
int lastButtonState4 = LOW;
int lastButtonState5 = LOW;
int count1 = 0;
int count2 = 0;
int count3 = 0;
int count4 = 0;
int count5 = 0;
unsigned long lastDebounceTime1 = 0;
unsigned long lastDebounceTime2 = 0;
unsigned long lastDebounceTime3 = 0;
unsigned long lastDebounceTime4 = 0;
unsigned long lastDebounceTime5 = 0;
unsigned long debounceDelay = 50;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);
}

void loop() {
  int reading1 = digitalRead(buttonPin1);
  int reading2 = digitalRead(buttonPin2);
  int reading3 = digitalRead(buttonPin3);
  int reading4 = digitalRead(buttonPin4);
  int reading5 = digitalRead(buttonPin5);


  if (reading1 != lastButtonState1) {lastDebounceTime1 = millis();}
  //reset the timer if input changes from H to L or L to H
  if ((millis() - lastDebounceTime1) > debounceDelay) {
    // if the button state has changed:
    if (reading1 != buttonState1) {
      buttonState1 = reading1;
      if (buttonState1 == HIGH) {
        count1++;
      }
    }
  }
  if (count1!=0 && (millis()-lastDebounceTime1)>1000){
    if (count1 ==1) {Serial.print("A");}
    if (count1 ==2) {Serial.print("B");}
    if (count1 ==3) {Serial.print("C");}
    if (count1 ==4) {Serial.print("D");}
    if (count1 ==5) {Serial.print("E");}
    if (count1 ==6) {Serial.print("F");}
    count1=0;    
  } 
  lastButtonState1 = reading1;

  
  if (reading2 != lastButtonState2) {lastDebounceTime2 = millis();}
  //reset the timer if input changes from H to L or L to H
  if ((millis() - lastDebounceTime2) > debounceDelay) {
    // if the button state has changed:
    if (reading2 != buttonState2) {
      buttonState2 = reading2;
      if (buttonState2 == HIGH) {
        count2++;
      }
    }
  }
  if (count2!=0 && (millis()-lastDebounceTime2)>1000){
    if (count2 ==1) {Serial.print("G");}
    if (count2 ==2) {Serial.print("H");}
    if (count2 ==3) {Serial.print("I");}
    if (count2 ==4) {Serial.print("J");}
    if (count2 ==5) {Serial.print("K");}
    if (count2 ==6) {Serial.print("L");}
    count2=0;    
  } 
  lastButtonState2 = reading2;


  if (reading3 != lastButtonState3) {lastDebounceTime3 = millis();}
  //reset the timer if input changes from H to L or L to H
  if ((millis() - lastDebounceTime3) > debounceDelay) {
    // if the button state has changed:
    if (reading3 != buttonState3) {
      buttonState3 = reading3;
      if (buttonState3 == HIGH) {
        count3++;
      }
    }
  }
  if (count3!=0 && (millis()-lastDebounceTime3)>1000){
    if (count3 ==1) {Serial.print("M");}
    if (count3 ==2) {Serial.print("N");}
    if (count3 ==3) {Serial.print("O");}
    if (count3 ==4) {Serial.print("P");}
    if (count3 ==5) {Serial.print("Q");}
    if (count3 ==6) {Serial.print("R");}
    count3=0;    
  } 
  lastButtonState3 = reading3;

  
  if (reading4 != lastButtonState4) {lastDebounceTime4 = millis();}
  //reset the timer if input changes from H to L or L to H
  if ((millis() - lastDebounceTime4) > debounceDelay) {
    // if the button state has changed:
    if (reading4 != buttonState4) {
      buttonState4 = reading4;
      if (buttonState4 == HIGH) {
        count4++;
      }
    }
  }
  if (count4!=0 && (millis()-lastDebounceTime4)>1000){
    if (count4 ==1) {Serial.print("S");}
    if (count4 ==2) {Serial.print("T");}
    if (count4 ==3) {Serial.print("U");}
    if (count4 ==4) {Serial.print("V");}
    if (count4 ==5) {Serial.print("W");}
    if (count4 ==6) {Serial.print("X");}
    count4=0;    
  } 
  lastButtonState4 = reading4;

  if (reading5 != lastButtonState5) {lastDebounceTime5 = millis();}
  //reset the timer if input changes from H to L or L to H
  if ((millis() - lastDebounceTime5) > debounceDelay) {
    // if the button state has changed:
    if (reading5 != buttonState5) {
      buttonState5 = reading5;
      if (buttonState5 == HIGH) {
        count5++;
      }
    }
  }
  if (count5!=0 && (millis()-lastDebounceTime5)>1000){
    if (count5 ==1) {Serial.print("Y");}
    if (count5 ==2) {Serial.print("Z");}
    if (count5 ==3) {Serial.print(" ");}
    if (count5 ==4) {Serial.print("_");}
    if (count5 ==5) {Serial.print("?");}
    if (count5 ==6) {Serial.print("!");}
    count5=0;    
  } 
  lastButtonState5 = reading5;
}
