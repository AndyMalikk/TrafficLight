//SEMAFOR with Button

int redLight = 13;
int orangeLight = 12;
int greenLight = 11;
int button = 2;
int waitTimer = 5000;
int orangeTimer = 2000;
int redTimer = 7000;
int readButton;
//green is turned on by default
void setup() {
  // put your setup code here, to run once:
  pinMode(button,INPUT);
  pinMode(redLight,OUTPUT);
  pinMode(orangeLight,OUTPUT);
  pinMode(greenLight,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readButton = digitalRead(button);
  Serial.println(readButton);
  digitalWrite(greenLight,HIGH); //green on by default

  //algorithm
  if(readButton == 0){
    delay(waitTimer);
    lightLogic();
  }
  else{
    digitalWrite(greenLight,HIGH);
  }

}

void lightLogic(){
  digitalWrite(greenLight,LOW);
  digitalWrite(orangeLight,HIGH);
  delay(orangeTimer);
  digitalWrite(orangeLight,LOW);
  digitalWrite(redLight,HIGH);
  delay(redTimer);
  digitalWrite(redLight,LOW);
  digitalWrite(orangeLight,HIGH);
  delay(orangeTimer);
  digitalWrite(orangeLight,LOW);
  digitalWrite(greenLight,HIGH);
}
