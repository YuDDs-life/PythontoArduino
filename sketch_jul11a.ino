int x;
void setup() {
 Serial.begin(9600);
 pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  while(Serial.available()){

    x = Serial.readString().toInt(); //Nhan gia tri tu pythonCODE roi chuyen sang integer
    Serial.println(x+1); //Gui gia tri nay ra cong Serial cho Python
    if (x==10)
      digitalWrite(LED_BUILTIN, HIGH);  
    if (x==0)
      digitalWrite(LED_BUILTIN, LOW);
  }
}