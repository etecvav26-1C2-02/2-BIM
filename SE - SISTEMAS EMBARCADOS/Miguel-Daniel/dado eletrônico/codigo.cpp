// C++ code
//
void setup()
{

  randomSeed(analogRead(0));
  pinMode(2, INPUT_PULLUP);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(1, OUTPUT);
}

void sorteio(){
	int valor = random(1,7);
   
     if (valor ==1){
    digitalWrite(8, HIGH);
    }
    
   if (valor == 2){
    digitalWrite(7, HIGH);
    digitalWrite(11, HIGH);
    }
   if (valor == 3){
    digitalWrite(7, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(8, HIGH);
   }
  
   if (valor == 4){
    digitalWrite(5, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(9, HIGH);
   }
  
   if (valor == 5){
    digitalWrite(5, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
   }
  
    
   if (valor == 6){
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
   }
  delay(4000);
   digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    
}

void loop()
{
  if (digitalRead(2) == HIGH){
   sorteio();
 
  
  
  
}
}
    
    
    
       



