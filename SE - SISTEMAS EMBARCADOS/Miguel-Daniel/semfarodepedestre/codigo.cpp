// C++ code
//

 int botaop = (0);

void setup()
{
  pinMode(12, INPUT_PULLUP);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  
 
}


void pedestre(){
 digitalWrite(6, LOW);    
  digitalWrite(7, LOW);  
digitalWrite(10, LOW);
digitalWrite(5, HIGH);
digitalWrite(8, HIGH);
digitalWrite(9, HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
digitalWrite(9, LOW);
  delay(000); // Wait for 1000 millisecond(s)
  
}





void loop()
{
 //verde,vemelho,vemrmelho
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(3, HIGH);//VERDE1
digitalWrite(8, HIGH);//VERMELHO2
digitalWrite(10, HIGH);//VERMELHO3
	delay(5000); // Wait for 1000 millisecond(s)
    if (digitalRead(12) == HIGH){//LER BOTAO
 	 botaop = 1;
  
}
digitalWrite(3, LOW);
 
  delay(000); // Wait for 1000 millisecond(s)

  //amarelo,vemelho,vemrmelho
digitalWrite(4, HIGH);
digitalWrite(8, HIGH);
digitalWrite(10, HIGH);
delay(2000); // Wait for 1000 millisecond(s)
   if (digitalRead(12) == HIGH){
 	 botaop = 1;
  
}
digitalWrite(4, LOW);
  delay(000); // Wait for 1000 millisecond(s)

//vermelho,verde,vemrmelho

digitalWrite(5, HIGH);
  
  if ( botaop == 1){
	pedestre();
    botaop = (0);
  }

digitalWrite(6, HIGH);
digitalWrite(8, LOW);
digitalWrite(10, HIGH);
	delay(5000); // Wait for 1000 millisecond(s)
digitalWrite(3, LOW);
  delay(000); // Wait for 1000 millisecond(s)
   if (digitalRead(12) == HIGH){//LER BOTAO
 	 botaop = 1;
  
  
//vermelho, amarelo,vemrmelho

digitalWrite(5, HIGH);
digitalWrite(6, LOW);
digitalWrite(7, HIGH);
digitalWrite(10, HIGH);
	delay(2000); // Wait for 1000 millisecond(s)
if ( botaop == 1){
	pedestre();
    botaop = (0);
  }
  

 digitalWrite(8, HIGH);

 digitalWrite(5, HIGH);
digitalWrite(10, HIGH);
 // delay(5000); // Wait for 1000 millisecond(s)


 



 //acabou o loop 
 
  if (digitalRead(12) == HIGH){
 	 botaop = 1;
  
}
  if ( botaop == 1){
	pedestre();
    botaop = (0);
  }
      
     
   }
  
}
 
  
