int LED0 = 43;
int LED1 = 44;
int LED2 = 45;
int LED3 = 46;

int SW0 = 38;
int SW1 = 39;
int SW2 = 40;
int SW3 = 41;

bool ledState0 = LOW;
bool ledState1 = LOW;
bool ledState2 = LOW;
bool ledState3 = LOW;

bool prevSW0 = HIGH;
bool prevSW1 = HIGH;
bool prevSW2 = HIGH;
bool prevSW3 = HIGH;

void setup() {

  pinMode(LED0, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  digitalWrite(LED0, LOW);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);

  pinMode(SW0, INPUT_PULLUP);
  pinMode(SW1, INPUT_PULLUP);
  pinMode(SW2, INPUT_PULLUP);
  pinMode(SW3, INPUT_PULLUP);
}

void loop() {

  bool currentSW0 = digitalRead(SW0);
  bool currentSW1 = digitalRead(SW1);
  bool currentSW2 = digitalRead(SW2);
  bool currentSW3 = digitalRead(SW3);

  if (prevSW0 == HIGH && currentSW0 == LOW) {
    ledState0 = !ledState0;
    digitalWrite(LED0, ledState0);
  }

  
  if (prevSW1 == HIGH && currentSW1 == LOW) {
    ledState1 = !ledState1;
    digitalWrite(LED1, ledState1);
  }

 
  if (prevSW2 == HIGH && currentSW2 == LOW) {
    ledState2 = !ledState2;
    digitalWrite(LED2, ledState2);
  }

  
  if (prevSW3 == HIGH && currentSW3 == LOW) {
    ledState3 = !ledState3;
    digitalWrite(LED3, ledState3);
  }

  
  prevSW0 = currentSW0;
  prevSW1 = currentSW1;
  prevSW2 = currentSW2;
  prevSW3 = currentSW3;

  
  delay(50);
}
