int motor1pin1 = 13; //pin1 high -> maju
int motor1pin2 = 12; //pin2 high -> mundur
int motor2pin1 = 8; //motor 1 -> kanan
int motor2pin2 = 7; //motor 2 -> kiri

void gerakmaju(){
  Serial.println("Maju");
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin2, LOW);
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor2pin1, HIGH);
}

void gerakmundur(){
  Serial.println("Mundur");
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
  digitalWrite(motor2pin2, HIGH);
}

void gerakkanan(){
  Serial.println("Belok Kanan");
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
}

void gerakkiri(){
  Serial.println("Belok Kiri");
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, LOW);
}

void mandeg(){
  Serial.println("Stop");
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin2, LOW);
}

void putarkanan(){
  Serial.println("Putar Kanan");
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor1pin2, HIGH);
  digitalWrite(motor2pin2, LOW);
}

void putarkiri(){
  Serial.println("Putar Kiri");
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor2pin2, HIGH);
}

void setroda(){
  mandeg();
}
