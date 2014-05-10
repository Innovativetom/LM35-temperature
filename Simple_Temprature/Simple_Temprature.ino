/*
Simple Temprature uses the lm35 in the basic centigrade temperature configuration
*/
float temp;
int tempPin = 2; // analog input pin
int sampleTime = 1000; // 1 second dafault 

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //gets and prints the raw data from the lm35
  temp = analogRead(tempPin);
  Serial.print("RAW DATA: ");
  Serial.print (temp);
  Serial.println(" ");
  //converts raw data into degrees celsius and prints it out
  // 500mV/1024=.48828125
  temp = temp * 0.48828125;
  Serial.print("CELSIUS: ");
  Serial.print(temp);
  Serial.println("*C ");
  //converts celsius into fahrenheit 
  temp = temp *9 / 5;
  temp = temp + 32;
  Serial.print("FAHRENHEIT: ");
  Serial.print(temp);
  Serial.println("*F");
  delay(sampleTime);

}
