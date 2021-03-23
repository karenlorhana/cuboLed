int colunas[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, A0, A1};   
int filas[4] = {A5, A4, A3, A2};

int randFila;     //Variable para fila aleatoria
int randColuna;  //Variable para columna aleatoria
   
void setup(){
int contador1;
int contador2;
   
for (int contador1 = 0; contador1 < 16; contador1++){
  pinMode(colunas[contador1], OUTPUT); 
  }
   
for (int contador2 = 0; contador2 <4 ; contador2++){
  pinMode(filas[contador2], OUTPUT); }
}
   
void loop(){
randLed;
}
   
void randLed(){
  
randFila = random(0,4);
randColuna = random(0,14);
   
digitalWrite(filas[randFila], HIGH);
digitalWrite(colunas[randColuna], HIGH);
   
delay(75);
   
digitalWrite(filas[randFila], LOW);
digitalWrite(colunas[randColuna], LOW);
   
delay(50);
}
