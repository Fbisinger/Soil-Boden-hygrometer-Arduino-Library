/* ============================================
Arduino Boden-hygrometer/-feuchtigkeits-Sensor-Bibliothek
           2018 F.Bisinger

Diese Bibliothek misst mithilfe eines Bodenfeuchtigkeitsensors die Boden-
feuchtigkeit, und rechnet diese in Prozent um.
===============================================
*/
// Mithilfe dieses Sketches kann der Sensorabhängige reference-Wert bestimmt werden.
// WICHTIG!! den neu bestimmten reference-Wert bei #define reference abändern.

#include"Bodenhygrometer.h"

Bodenhygrometer demo;

#define reference 115

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("neuer reference-Wert:        ");
  Serial.println(demo.getBodenfeuchtigkeit(0,reference,FORMAT_RAW));
  delay(500);
}
