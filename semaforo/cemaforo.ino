int carRed = 6, carYellow = 4, carGreen = 2;
int pedRed = 11, pedGreen = 8, button = 12;
int crossTime = 5000, tempo = 0;
unsigned long changeTime = 0;

void setup(){
  pinMode(carRed, OUTPUT);
  pinMode(carYellow, OUTPUT);
  pinMode(carGreen, OUTPUT);
  pinMode(pedRed, OUTPUT);
  pinMode(pedGreen, OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(carGreen, HIGH);
  digitalWrite(carRed, HIGH);
} 


void loop(){
  tempo = millis();
  int state= digitalRead(button);
  if (state != HIGH && (tempo-changeTime)>20000){
    changeLights();
    changeTime = tempo;
  }
}

void changeLights(){
  delay(2000);
  digitalWrite(carGreen, LOW);
  digitalWrite(carYellow, HIGH);
  delay(2000);
  digitalWrite(carYellow, LOW);
  digitalWrite(carRed, HIGH);
  delay(250);
  digitalWrite(pedGreen, HIGH);
  digitalWrite(pedRed, LOW);
  delay(crossTime);
  //pedestres
  for(int x=0; x<10; x++){
    digitalWrite(pedGreen, HIGH);
    delay(250);
    digitalWrite(pedGreen, LOW);
    delay(250);
  }
  //carros
  delay(500);
  digitalWrite(pedRed, HIGH);
  digitalWrite(carRed, LOW);
  digitalWrite(carGreen, HIGH);
}
