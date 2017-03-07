/* This projects main focus is to
 * create a very basic sound level
 * visualizer.
 */

int pin0 = 12;
int pin1 = 11;
int pin2 = 10;
int pin3 = 9;
int pin4 = 8;
int pin5 = 7;
int pin6 = 6;
int pin7 = 5;
int pin8 = 4;
int pin9 = 3;
int pin10 = 2;
int CH_L = 0;
int CH_R = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(pin0, OUTPUT);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(pin8, OUTPUT);
  pinMode(pin9, OUTPUT);
  pinMode(pin10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  CH_L = analogRead(A0);
  CH_R = analogRead(A1);

  int wave = (CH_L + CH_R) * 2;

  if(wave > 90 * 1){digitalWrite(pin0, HIGH);}else{digitalWrite(pin0, LOW);}
  if(wave > 90 * 2){digitalWrite(pin1, HIGH);}else{digitalWrite(pin1, LOW);}
  if(wave > 90 * 3){digitalWrite(pin2, HIGH);}else{digitalWrite(pin2, LOW);}
  if(wave > 90 * 4){digitalWrite(pin3, HIGH);}else{digitalWrite(pin3, LOW);}
  if(wave > 90 * 5){digitalWrite(pin4, HIGH);}else{digitalWrite(pin4, LOW);}
  if(wave > 90 * 6){digitalWrite(pin5, HIGH);}else{digitalWrite(pin5, LOW);}
  if(wave > 90 * 7){digitalWrite(pin6, HIGH);}else{digitalWrite(pin6, LOW);}
  if(wave > 90 * 8){digitalWrite(pin7, HIGH);}else{digitalWrite(pin7, LOW);}
  if(wave > 90 * 9){digitalWrite(pin8, HIGH);}else{digitalWrite(pin8, LOW);}
  if(wave > 90 * 10){digitalWrite(pin9, HIGH);}else{digitalWrite(pin9, LOW);}
  if(wave > 90 * 11){digitalWrite(pin10, HIGH);}else{digitalWrite(pin10, LOW);}

  // Serial Output for Graphical Display
  // on Computer / Debugger
  
  Serial.print(1024);
  Serial.print(" ");
  Serial.print(CH_L * 4);
  Serial.print(" ");
  Serial.print(CH_R * -4);
  Serial.print(" ");
  Serial.print(-1024);
  Serial.println();

  delay(10);
}
