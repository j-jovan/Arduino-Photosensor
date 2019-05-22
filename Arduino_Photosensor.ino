int sensorPin = A0; // LDR pin
int led = 9; 

int sensorValue = 0; // Primanje vrednosti senzora
void setup() {
Serial.begin(9600);
pinMode(led, OUTPUT);
}
void loop() {
sensorValue = analogRead(sensorPin); // Citanje vrednosti senzora
Serial.println(sensorValue); 
//analogWrite(led, sensorValue); //Uspesno kontrolise senzor

if(sensorValue < 300 and sensorValue>100){
  digitalWrite(led, HIGH);
}
if(sensorValue>300){
  digitalWrite(led, LOW);
}
delay(100);

}
