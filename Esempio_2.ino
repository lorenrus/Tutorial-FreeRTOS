

#include <Arduino_FreeRTOS.h>


// Secondo esempio con sistema Real Time.


void LedRedControllerTask (void * pvParameters);
void LedBlueControllerTask (void * pvParameters);
void LedYellowControllerTask (void * pvParameters);



#define Led_Red 6
#define Led_Yellow 7
#define Led_Blue 8



void setup() {

  Serial.begin(9600);


  // I task è come se fossero dei "void loop()"

  // Paramentri del task:

  // 1) Nome della funzione del task
  // 2) Nome del task per debug, 
  // 3) Dimensione dello stack da instanziare per il task
  // 4) Un puntatore di tipo void che indicherà la locazione di memoria dei parametri 
  // 5) Priorità del task
  // 6) Puntatore ad un handler del task che permette di eseguire operazioni su di esso durante la sua esecuzione

  xTaskCreate( LedRedControllerTask, "Red Led task", 128, NULL, 1, NULL );

  xTaskCreate( LedBlueControllerTask, "Blue Led task", 128, NULL, 1, NULL );

  xTaskCreate( LedYellowControllerTask, "Yellow Led task", 128, NULL, 1, NULL );

  // Creati i task devo creare le funzioni in essi riportate
}


void LedRedControllerTask(void * pvParameters) {

  // Questa parte funge da setup

  pinMode(Led_Red, OUTPUT);

  while(1) { // posso anche utilizzare for(;;)

    //digitalWrite(Led_Red, digitalRead(Led_Red)^1);
    Serial.println("PIPPO");
    delay(1000);
  }
  
}

void LedBlueControllerTask(void * pvParameters) {

  // Questa parte funge da setup

  pinMode(Led_Blue, OUTPUT);

  while(1) { // posso anche utilizzare for(;;)

    //digitalWrite(Led_Blue, digitalRead(Led_Blue)^1);
    Serial.println("PLUTO");
    
    delay(1000);
  }
}

void LedYellowControllerTask(void * pvParameters) {

  // Questa parte funge da setup

  pinMode(Led_Yellow, OUTPUT);

  while(1) { // posso anche utilizzare for(;;)

    //digitalWrite(Led_Yellow, digitalRead(Led_Yellow)^1);
    Serial.println("MINNI");
    
    delay(1000);
  }
}

void loop() {
  
  // Nei sistemi real time non viene utilizzato
}
