void setup() {
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}
void RightForward(int a) {    //右モーター正回転
  analogWrite(6,a);
  analogWrite(5,0);
}void RightBack(int b) {    //右モーター逆回転
  analogWrite(5,b);
  analogWrite(6,0);
}void LeftForward(int c) {    //左モーター正回転
  analogWrite(9,c);
  analogWrite(10,0);
}void LeftBack(int d) {    //左モーター逆回転
  analogWrite(10,d);
  analogWrite(9,0);
}

void loop() {
  if ( analogRead(A3) >300 && analogRead(A2) <300) {    //右旋回(小径)
    LeftForward(200);
    RightForward(100);
  } else if( analogRead(A2) >300 && analogRead(A3) <300) {    //左旋回(小径)
    RightForward(200);
    LeftForward(125);
  } else if( analogRead(A4) >300 && analogRead(A1) <300){    //右旋回(大径)
    LeftForward(200);
    RightForward(0);
  } else if( analogRead(A1) >300 && analogRead(A4) <300){    //左旋回(大径)
    RightForward(255);
    LeftForward(0);
  }
}
