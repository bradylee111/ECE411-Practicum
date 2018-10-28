/*
 * ECE 411 Project - Digitial music box
 * Alexandra Pinzon, Lee Brady, Nathalie Marquez, Wanyu Zhang
 * 
 * This will take digital input from the photoresistors to then trigger
 * the corresponding music note. Uses the tone commands built in 
 * arduino IDE, then outputs an analog signal to the speaker. Will
 * be using notes from the C major scale.
 */

// Setting in/out pin numbers
int analog_out_pin = 11;

int sensor1 = 9,
    sensor2 = 8,
    sensor3 = 7,
    sensor4 = 6,
    sensor5 = 5,
    sensor6 = 4,
    sensor7 = 3;

// Freqencies for C major
int C_4 = 261.63,
    D_4 = 293.66,
    E_4 = 329.63,
    F_4 = 349.23,
    G_4 = 392,
    A_4 = 440,
    B_4 = 493.88;

// Definiton of hitting a punch card signal
int HIT = 0;
    
void setup() {
// Setup code here, to run once:
  
// initialize serial communications at 9600 bps:
  Serial.begin(9600);

// Setting input pins
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor4, INPUT);
  pinMode(sensor5, INPUT);
  pinMode(sensor6, INPUT);
  pinMode(sensor7, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(sensor1) == HIT){
    tone(analog_out_pin, C_4);
    
  }else if(digitalRead(sensor2) == HIT){
    tone(analog_out_pin, D_4);
    
  }else if(digitalRead(sensor3) == HIT){
    tone(analog_out_pin, E_4);
    
  }else if(digitalRead(sensor4) == HIT){
    tone(analog_out_pin, F_4);
    
  }else if(digitalRead(sensor5) == HIT){
    tone(analog_out_pin, G_4);
    
  }else if(digitalRead(sensor6) == HIT){
    tone(analog_out_pin, A_4);
    
  }else if(digitalRead(sensor7) == HIT){
    tone(analog_out_pin, B_4);
    
  }else
    noTone(analog_out_pin);
}
