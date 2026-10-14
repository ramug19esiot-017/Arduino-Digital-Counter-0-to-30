int t[]={2,3,4,5}, u[]={6,7,8,9};

void setup(){
  for(int i=2;i<=9;i++) pinMode(i,OUTPUT);
}

void loop(){
  for(int n=0;n<=30;n++){
    for(int i=0;i<4;i++){
      digitalWrite(t[i],(n/10>>i)&1);
      digitalWrite(u[i],(n%10>>i)&1);
    }
    delay(600);
  }
}
