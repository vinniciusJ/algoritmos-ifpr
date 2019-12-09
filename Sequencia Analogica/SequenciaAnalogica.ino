

void setup() {

  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  
}


void loop() {

  int valorAnalog = analogRead(A0);
  
  
  if(valorAnalog < 146){
    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
  else if(valorAnalog <= 292){
    digitalWrite(0, HIGH);

    for(int i = 1; i < 5; i++){
      digitalWrite(i, LOW);
    }
  }
  
  else if(valorAnalog <= 438){
    digitalWrite(1, HIGH);

    for(int i = 2; i < 5; i++){
      digitalWrite(i, LOW);
    }
  }
  
  else if(valorAnalog <= 584){
    digitalWrite(2, HIGH);

     for(int i = 3; i < 5; i++){
      digitalWrite(i, LOW);
    }
  }
  
  else if(valorAnalog <= 730){
    digitalWrite(3, HIGH);

     for(int i = 4; i < 5; i++){
      digitalWrite(i, LOW);
    }
  } 
  
  else if(valorAnalog <= 876){
    digitalWrite(4, HIGH);

     for(int i = 5; i <= 5; i++){
      digitalWrite(i, LOW);
    }
  } 
  
  else if(valorAnalog <= 1023){
    digitalWrite(5, HIGH);
 
  } 
    
}
