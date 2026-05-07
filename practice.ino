void setup() {
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}
void RightForward(int a) {    //右モーター正回転
  analogWrite(6,a);
  analogWrite(5,0);
}
void RightBack(int b) {    //右モーター逆回転
  analogWrite(5,b);
  analogWrite(6,0);
}
void LeftForward(int c) {    //左モーター正回転
  analogWrite(9,c);
  analogWrite(10,0);
}
void LeftBack(int d) {    //左モーター逆回転
  analogWrite(10,d);
  analogWrite(9,0);
}


void loop() {
  if ( analogRead(A3) > && analogRead(A2) <){    //右旋回(小径)
    LeftForward();
    RightForward();
  } else if( analogRead(A2) > && analogRead(A3) <){    //左旋回(小径)
    RightForward();
    LeftForward();
  } else if( analogRead(A4) > && analogRead(A1) <){    //右旋回(大径)
      LeftForward();
      RightForward();
  } else if( analogRead(A1) > && analogRead(A4) <){    //左旋回(大径)
      RightForward();
      LeftForward();
  } else if( analogRead(A0) > && analogRead(A5) <){
    while( analogRead(A5) >){
      RightForward();
    }
  } else if( analogRead(A5) > && analogRead(A0) <){
    while( analogRead(A0) >){
      RightForward();
    }
  }
}
