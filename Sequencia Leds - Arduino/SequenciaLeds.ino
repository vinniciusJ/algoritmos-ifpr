//Sequência de Leds com 2 botões

//Declaração das entradas e saidas

int entrada1;
int entrada2;

int saida1 = 1;
int saida2 = 2;
int saida3 = 3;
int saida4 = 4;
int saida5 = 5;
int saida6 = 6;

//Configurando as entradas e saidas

void setup() {

  pinMode(13, INPUT );
  pinMode(12, INPUT ); 


  pinMode(saida1, OUTPUT );
  pinMode(saida2, OUTPUT );
  pinMode(saida3, OUTPUT );
  pinMode(saida4, OUTPUT );
  pinMode(saida5, OUTPUT );
  pinMode(saida6, OUTPUT );

}

void loop() {

  //Lendo os botões

  entrada1 = digitalRead(13);
  entrada2 = digitalRead(12);

  //Primeira sequência quando ambas entradas forem pressionadas

  if(entrada1 == 1 && entrada2 == 1){

  for(int i = 0; i<2; i++){
    digitalWrite(saida2, HIGH);
    digitalWrite(saida5, HIGH);
    delay(500);
    digitalWrite(saida5, LOW);
    digitalWrite(saida2, LOW);
    delay(500); 
  } 

   for(int i = 0; i<2; i++){
    
    digitalWrite(saida1, HIGH);
    digitalWrite(saida3, HIGH);
    digitalWrite(saida4, HIGH);
    digitalWrite(saida6, HIGH);
    delay(500);
    digitalWrite(saida4, LOW);
    digitalWrite(saida6, LOW);
    digitalWrite(saida1, LOW); 
    digitalWrite(saida3, LOW);
    delay(500);
  }

    digitalWrite(saida1, HIGH);
    digitalWrite(saida6, HIGH);
    delay(500);
    digitalWrite(saida1, LOW);
    digitalWrite(saida6, LOW);

    digitalWrite(saida2, HIGH);
    digitalWrite(saida5, HIGH);
    delay(500);
    digitalWrite(saida2, LOW); 
    digitalWrite(saida5, LOW);
 
  for(int i = 0; i<2; i++){
    digitalWrite(saida3, HIGH);
    digitalWrite(saida4, HIGH);
    delay(500);
    digitalWrite(saida3, LOW); 
    digitalWrite(saida4, LOW);
    delay(500);

  }

    digitalWrite(saida2, HIGH);
    digitalWrite(saida5, HIGH);
    delay(500);
    digitalWrite(saida2, LOW); 
    digitalWrite(saida5, LOW);

    digitalWrite(saida1, HIGH);
    digitalWrite(saida6, HIGH);
    delay(500);
    digitalWrite(saida1, LOW); 
    digitalWrite(saida6, LOW);
    
  }

  //Segunda sequência quando entrada1 for pressionada e a entrada2 não for pressionada
  
  else if(entrada1 == 1 && entrada2 == 0){

    digitalWrite(saida6, HIGH);
    digitalWrite(saida1, HIGH);
    delay(500);
    digitalWrite(saida6, LOW);
    digitalWrite(saida1, LOW);
    
    digitalWrite(saida2, HIGH);
    digitalWrite(saida5, HIGH);
    delay(500);
    digitalWrite(saida2, LOW);
    digitalWrite(saida5, LOW);
    
    digitalWrite(saida3, HIGH);
    digitalWrite(saida4, HIGH);
    delay(500);
    digitalWrite(saida3, LOW);
    digitalWrite(saida4, LOW);
    delay(500);
    digitalWrite(saida3, HIGH);
    digitalWrite(saida4, HIGH);
    delay(500);
    digitalWrite(saida3, LOW);
    digitalWrite(saida4, LOW);

    digitalWrite(saida2, HIGH);
    digitalWrite(saida5, HIGH);
    delay(500);
    digitalWrite(saida2, LOW);
    digitalWrite(saida5, LOW);
    
    digitalWrite(saida6, HIGH);
    digitalWrite(saida1, HIGH);
    delay(500);
    digitalWrite(saida6, LOW);
    digitalWrite(saida1, LOW);
    
  }

  //Terceira sequencia quando a entrada1 nao for pressionada e a entrada2 for pressionada
  
  else if(entrada1 == LOW && entrada2 == HIGH){

    digitalWrite(saida3, HIGH);
    digitalWrite(saida4, HIGH);
    delay(500);
    digitalWrite(saida3, LOW);
    digitalWrite(saida4, LOW);

    digitalWrite(saida2, HIGH);
    digitalWrite(saida5, HIGH);
    delay(500);
    digitalWrite(saida2, LOW);
    digitalWrite(saida5, LOW);

    digitalWrite(saida1, HIGH);
    digitalWrite(saida6, HIGH);
    delay(500);
    digitalWrite(saida1, LOW);
    digitalWrite(saida6, LOW);

    delay(500);

    digitalWrite(saida1, HIGH);
    digitalWrite(saida6, HIGH);
    delay(500);
    digitalWrite(saida1, LOW);
    digitalWrite(saida6
    , LOW);
    
    digitalWrite(saida5, HIGH);
    digitalWrite(saida2, HIGH);
    delay(500);
    digitalWrite(saida5, LOW);
    digitalWrite(saida2, LOW);

    digitalWrite(saida4, HIGH);
    digitalWrite(saida3, HIGH);
    delay(500);
    digitalWrite(saida4, LOW);
    digitalWrite(saida3, LOW);

    
  }

//Se nenhuma entrada for pressionada, todos os leds ligam
  
  else {
  
    digitalWrite(saida1, LOW);
    digitalWrite(saida2, LOW);
    digitalWrite(saida3, LOW);
    digitalWrite(saida4, LOW);
    digitalWrite(saida5, LOW);
    digitalWrite(saida6, LOW);
 
    
  }


}
