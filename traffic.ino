//road 1
int G1 = 1;
int R1 = 2;
int Y1 = 3;
//road 2
int G2 = 4;
int R2 = 5;
int Y2 = 6;
//road 3
int G3 = 7;
int R3 = 8;
int Y3 = 9;
//road 4
int G4 = 10;
int R4 = 11;
int Y4 = 12;
void setup() {
  // put your setup code here, to run once:
  pinMode(G1, OUTPUT);
  pinMode(R1, OUTPUT);
  pinMode(Y1, OUTPUT);
  pinMode(G2, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(Y2, OUTPUT);
  pinMode(G3, OUTPUT);
  pinMode(R3, OUTPUT);
  pinMode(Y3, OUTPUT);
  pinMode(G4, OUTPUT);
  pinMode(R4, OUTPUT);
  pinMode(Y4, OUTPUT);

  // all red on
  digitalWrite(R1, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(R3, HIGH);
  digitalWrite(R4, HIGH);

  // all yellow off
  digitalWrite(Y1, LOW);
  digitalWrite(Y2, LOW);
  digitalWrite(Y3, LOW);
  digitalWrite(Y4, LOW);

  // all green off
  digitalWrite(G1, LOW);
  digitalWrite(G2, LOW);
  digitalWrite(G3, LOW);
  digitalWrite(G4, LOW);
  delay(3000);
}

void loop() {
  //Open road 1

  digitalWrite(R2, LOW);
  digitalWrite(Y2, HIGH);
  delay(2000);
  digitalWrite(Y2, LOW);
  digitalWrite(G2, HIGH);
  delay(3000);
  digitalWrite(G2, LOW);
  digitalWrite(R2, HIGH);

  //road 2


  digitalWrite(R1, LOW);
  digitalWrite(Y1, HIGH);
  delay(2000);
  digitalWrite(Y1, LOW);
  digitalWrite(G1, HIGH);
  delay(3000);
  digitalWrite(G1, LOW);
  digitalWrite(R1, HIGH);

  //road 3

  digitalWrite(R3, LOW);
  digitalWrite(Y3, HIGH);
  delay(2000);
  digitalWrite(Y3, LOW);
  digitalWrite(G3, HIGH);
  delay(3000);
  digitalWrite(G3, LOW);
  digitalWrite(R3, HIGH);

  //road 4


  digitalWrite(R4, LOW);
  digitalWrite(Y4, HIGH);
  delay(2000);
  digitalWrite(Y4, LOW);
  digitalWrite(G4, HIGH);
  delay(3000);
  digitalWrite(G4, LOW);
  digitalWrite(R4, HIGH);
}
