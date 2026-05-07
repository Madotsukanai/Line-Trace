void setup() { 
  pinMode (5,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (9,OUTPUT);
  pinMode (10,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(A3));
  if ( analogRead(A1) >500) {
    analogWrite(5, 0);
    analogWrite(6, 0);
    analogWrite(9,0);
    analogWrite(10, 100);
  } else if ( analogRead(A1) >500){
    analogWrite(5, 0);
    analogWrite(6, 100);
    analogWrite(9,0);
    analogWrite(10, 0);
  } else if ( analogRead(A5) >500 && analogRead(A1) <500 ){
    analogWrite(5, 0);
    analogWrite(6, 100);
    analogWrite(9, 0);
    analogWrite(10,100);
  } else {
    analogWrite(5, 0);
    analogWrite(6, 100);
    analogWrite(9,0);
    analogWrite(10, 100);
  }
}
