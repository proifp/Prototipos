int in = 0;
byte pinOut = 10;

void setup() {
  // inicializar puerto serie
  Serial.begin(9600);
  // preparar output
  pinMode(pinOut, OUTPUT);
}

void loop() {
  // leer dato si disponible
  if(Serial.available()){
    in = Serial.read();
    // escribir en el pin
    analogWrite(pinOut, in);
  }
}
