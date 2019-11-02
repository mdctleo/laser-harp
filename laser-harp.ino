/* Photocell simple testing sketch. 
 
Connect one end of the photocell to 5V, the other end to Analog 0.
Then connect one end of a 10K resistor from Analog 0 to ground
 
For more information see http://learn.adafruit.com/photocells */

int laser0 = 8;
int laser1 = 9;
int photocell0 = 0;
int photocell1 = 1;// the cell and 10K pulldown are connected to a0
int photocellReading0 = 0;     // the analog reading from the analog resistor divider
int photocellReading1 = 0;
int photocellReadings[20];
 
void setup(void) {
  // We'll send debugging information via the Serial monitor
   Serial.begin(9600);
   pinMode (laser0, OUTPUT);
   digitalWrite (laser0, HIGH); 
   pinMode(laser1, OUTPUT);
   digitalWrite(laser1, HIGH);


}
 
void loop(void) {
//  photocellReading0 = analogRead(photocell0);
//  photocellReading1 = analogRead(photocell1);
  photocellReadings[0] = analogRead(photocell0);
  photocellReadings[1] = analogRead(photocell1);
  for (int i = 0; i < 2; i ++) {
      if (i != 0) {
        Serial.print(" ");
        }
      Serial.print(photocellReadings[i]);
    }

    Serial.print("\n");
 
//  Serial.println(photocellReading0);// the raw analog reading
//  Serial.println(photocellReading1);
 
  // We'll have a few threshholds, qualitatively determined
//  if (photocellReading < 10) {
//    Serial.println(" - Dark");
//  } else if (photocellReading < 200) {
//    Serial.println(" - Dim");
//  } else if (photocellReading < 500) {
//    Serial.println(" - Light");
//  } else if (photocellReading < 800) {
//    Serial.println(" - Bright");
//  } else {
//    Serial.println(" - Very bright");
//  }
  delay(50);
}
