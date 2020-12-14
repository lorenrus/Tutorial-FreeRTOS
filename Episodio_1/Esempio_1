




// Primo esempio senza sistema Real Time. Nell'esempio 2 invece includeremo la libreria FreeRTOS


#define Led_Red       6
#define Led_Yellow    7
#define Led_Blue      8



void setup() {

  Serial.begin(9600);
  
  pinMode(Led_Red, OUTPUT);
  pinMode(Led_Blue, OUTPUT);
  pinMode(Led_Yellow, OUTPUT);

}

void loop() {
  
  // Si accenderanno tutti e tre

  //digitalWrite(Led_Red, HIGH);
  //delay(30);
  //digitalWrite(Led_Red, LOW);
  //delay(30);
  //digitalWrite(Led_Blue, HIGH);
  //digitalWrite(Led_Yellow, HIGH);

  // Applichiamo il blink, ^ 1 è l'operatore di toggle, se il pin in quel momento è alto lo mette basso e viceversa.

  // Linea 1
  //digitalWrite(Led_Red, digitalRead(Led_Red)^1);
  Serial.println("PIPPO");

  // Linea 2
  //digitalWrite(Led_Blue, digitalRead(Led_Blue)^1);
  Serial.println("PLUTO");
  
  // Linea 3
  //digitalWrite(Led_Yellow, digitalRead(Led_Yellow)^1);
  Serial.println("MINNI");
  
  delay(2000);

}
