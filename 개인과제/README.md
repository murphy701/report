2019 창의공학 숙제

소감:처음으로 아두이노를 사용하여 컴퓨터와 아두이노간의 통신을 하는 코드를 배웠습니다. 오늘 수업을 통하여 아두이노와 프로세싱 프로그램을 사용하여
응용할 수 있는 분야가 많이 있다는 것을 깨달았습니다. 아두이노를 코딩을 배우면서 어려움이 많았습니다. 브레드보드에 스케치 하는 것도 초등학교때 배우고 
기억이 잘 나지않아서 힘들었고 코딩도 힘들었지만 수업시간에 배운 내용을 잘 기억하고 필기해두어 과제를 하였습니다. 아두이노의 기능이 생각보다 많이 있다는 것을 
깨달았고 앞으로의 수업시간에 배울 내용이 더욱 기대됩니다.


아두이노 코드(arduino code)
void setup(){
  Serial.begin(9600);
}
int a;

void loop(){
 a=analogRead(A0);
 Serial.println(++a);
 if(a>255); a=0;
 delay(400);
}

프로세싱 코드(processing code)
import processing.serial.*;
Serial p;
void setup(){
  size(300,300);
  p=new Serial(this,"COM5",9600);
}
void draw(){
  if(p.available()>0){
    String m=p.readString();
    int a=int(m.trim());
    println(a);
    if(a>250) fill(0,250,0);
    else fill(0,0,150);
    ellipse(150,150,a,a);
  }
}

