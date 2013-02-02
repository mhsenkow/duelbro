/*
  ReadAnalogVoltage
  Reads an analog input on pin 0, converts it to voltage, and prints the result to the serial monitor.
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.
 
 This example code is in the public domain.
 */
 
 int turnON = 13;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  pinMode(turnON, OUTPUT); 
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  digitalWrite(turnON, HIGH);
  int sensorValue = analogRead(A0);
  int sensorValue2 = analogRead(A1);
  int sensorValue3 = analogRead(A2);

  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
    float voltage2 = sensorValue2 * (5.0 / 1023.0);

  float voltage3 = sensorValue3 * (5.0 / 1023.0);

  // print out the value you read:
  Serial.print("X: ");
  Serial.print(voltage);
  Serial.print(", Y:");
  Serial.print(voltage2);
  Serial.print(", Z:");
  Serial.println(voltage3);
  
  delay(200);
}
