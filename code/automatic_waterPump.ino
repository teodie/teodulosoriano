const int lower_reed = 1; const int relay = 4; const int upper_reed = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(relay, OUTPUT);

  pinMode(upper_reed, INPUT);
  pinMode(lower_reed, INPUT);

digitalWrite(relay, HIGH);
}
// the loop function runs over and over again forever
void loop() {
  int upper_state = digitalRead(upper_reed);
  int lower_state = digitalRead(lower_reed);
  
  if(upper_state == HIGH){
    digitalWrite(relay, HIGH);                    
  }
  
  if(lower_state == HIGH){
   digitalWrite(relay, LOW);                    
  }
}
