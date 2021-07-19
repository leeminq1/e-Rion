int in1 = 6;  //in1 7번 포트로 제어 (OUT1)
int in2 = 7;  //in2 5번 포트로 제어 (OUT2)
int EnPin=5;
int input_data;

void setup() {
  pinMode(in1, OUTPUT); 
  pinMode(in2, OUTPUT); //각 포트 출력으로 사용
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  analogWrite(EnPin,255);
}

void loop() {
 while(Serial.available()){
    input_data=Serial.read();
    }
     if(input_data=='1'){
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);
      digitalWrite(13, HIGH);
      }
    else if(input_data=='0'){
      digitalWrite(in1,LOW);
      digitalWrite(in2,LOW);
      digitalWrite(13, LOW);
      }
    else{
      digitalWrite(in1,LOW);
      digitalWrite(in2,LOW);
      digitalWrite(13, LOW);
      }   
}
