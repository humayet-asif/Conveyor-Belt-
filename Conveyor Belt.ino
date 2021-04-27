int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int led5 = 12;

int ldr1 = A0;
int ldr2 = A1;
int ldr3 = A2;
int ldr4 = A3;
int ldr5 = A4;

int ldr1status;
int ldr2status;
int ldr3status;
int ldr4status;
int ldr5status;


void setup() {
  pinMode(8,OUTPUT);
  pinMode(A0,INPUT);
  
  pinMode(9,OUTPUT);
  pinMode(A1,INPUT);
  
  pinMode(10,OUTPUT);
  pinMode(A2,INPUT);

  pinMode(11,OUTPUT);
  pinMode(A3,INPUT);

  pinMode(12,OUTPUT);
  pinMode(A4,INPUT);

  
  Serial.begin(9600);

}

void loop() {
  ldr1status = analogRead (A0);
  Serial.println(ldr1status);

  if(ldr1status <= 30)
  {
    digitalWrite(led1,HIGH);
  }
  else
  {
    digitalWrite(led1,LOW);
  }

    ldr2status = analogRead (A1);
  Serial.println(ldr2status);

  if(ldr2status <= 30)
  {
    digitalWrite(led2,HIGH);
  }
  else
  {
    digitalWrite(led2,LOW);
  }

    ldr3status = analogRead (A2);
  Serial.println(ldr3status);

  if(ldr3status <= 60)
  {
    digitalWrite(led3,HIGH);
  }
  else
  {
    digitalWrite(led3,LOW);
  }


    ldr4status = analogRead (A3);
  Serial.println(ldr4status);

  if(ldr4status <= 30)
  {
    digitalWrite(led4,HIGH);
  }
  else
  {
    digitalWrite(led4,LOW);
  }


  ldr5status = analogRead (A4);
  Serial.println(ldr5status);

  if(ldr5status <= 15)
  {
    digitalWrite(led5,HIGH);
  }
  else
  {
    digitalWrite(led5,LOW);
  }

  

}
