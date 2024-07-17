#define VERMELHOS1 2
#define VERDES1 3

#define VERMELHOS2 4
#define VERDES2 5

#define VERMELHOS3 6
#define VERDES3 7

#define VERMELHOS4 8
#define VERDES4 9

#define VERMELHOS5 10
#define VERDES5 11

int tempoVerde = 400;
int tempoVermelho = 750;
int incremento = 1;

void setup(){
  pinMode(VERMELHOS1, OUTPUT);
  pinMode(VERDES1, OUTPUT);
  
  pinMode(VERMELHOS2, OUTPUT);
  pinMode(VERDES2, OUTPUT);
  
  pinMode(VERMELHOS3, OUTPUT);
  pinMode(VERDES3, OUTPUT);
  
  pinMode(VERMELHOS4, OUTPUT);
  pinMode(VERDES4, OUTPUT);
  
  pinMode(VERMELHOS5, OUTPUT);
  pinMode(VERDES5, OUTPUT);
}

void verdeLoop(){
  digitalWrite(VERDES1, HIGH);
  delay(tempoVerde);
  digitalWrite(VERDES1, LOW);
  delay(tempoVerde);
  
  digitalWrite(VERDES2, HIGH);
  delay(tempoVerde);
  digitalWrite(VERDES2, LOW);
  delay(tempoVerde);
  
  digitalWrite(VERDES3, HIGH);
  delay(tempoVerde);
  digitalWrite(VERDES3, LOW);
  delay(tempoVerde);
  
  digitalWrite(VERDES4, HIGH);
  delay(tempoVerde);
  digitalWrite(VERDES4, LOW);
  delay(tempoVerde);
  
  digitalWrite(VERDES5, HIGH);
  delay(tempoVerde);
  digitalWrite(VERDES5, LOW);
  delay(tempoVerde);
}

void vermelhoLoop(){
  digitalWrite(VERMELHOS1, HIGH);
  digitalWrite(VERMELHOS2, HIGH);
  digitalWrite(VERMELHOS3, HIGH);
  digitalWrite(VERMELHOS4, HIGH);
  digitalWrite(VERMELHOS5, HIGH);
  delay(2000);
  
  digitalWrite(VERMELHOS1, HIGH);
  digitalWrite(VERMELHOS2, HIGH);
  digitalWrite(VERMELHOS3, HIGH);
  digitalWrite(VERMELHOS4, HIGH);
  digitalWrite(VERMELHOS5, LOW);
  delay(tempoVermelho);
  
  digitalWrite(VERMELHOS1, HIGH);
  digitalWrite(VERMELHOS2, HIGH);
  digitalWrite(VERMELHOS3, HIGH);
  digitalWrite(VERMELHOS4, LOW);
  digitalWrite(VERMELHOS5, LOW);
  delay(tempoVermelho);
  
  digitalWrite(VERMELHOS1, HIGH);
  digitalWrite(VERMELHOS2, HIGH);
  digitalWrite(VERMELHOS3, LOW);
  digitalWrite(VERMELHOS4, LOW);
  digitalWrite(VERMELHOS5, LOW);
  delay(tempoVermelho);
  
  digitalWrite(VERMELHOS1, HIGH);
  digitalWrite(VERMELHOS2, LOW);
  digitalWrite(VERMELHOS3, LOW);
  digitalWrite(VERMELHOS4, LOW);
  digitalWrite(VERMELHOS5, LOW);
  delay(tempoVermelho);
  
  digitalWrite(VERMELHOS1, LOW);
  digitalWrite(VERMELHOS2, LOW);
  digitalWrite(VERMELHOS3, LOW);
  digitalWrite(VERMELHOS4, LOW);
  digitalWrite(VERMELHOS5, LOW);
  delay(tempoVermelho);
}

void loop(){
 verdeLoop();
  
  if (incremento == 5){
  	vermelhoLoop();
    incremento = 0;
  }
  
 incremento++;
}