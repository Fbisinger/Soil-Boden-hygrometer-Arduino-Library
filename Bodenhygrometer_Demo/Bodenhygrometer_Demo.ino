/* ============================================
Arduino Boden-hygrometer/-feuchtigkeits-Sensor-Bibliothek
           2018 F.Bisinger

Diese Bibliothek misst mithilfe eines Bodenfeuchtigkeitsensors die Boden-
feuchtigkeit, und rechnet diese in Prozent um.
===============================================
*/
#include"Bodenhygrometer.h"

Bodenhygrometer demo; //anstelle von "demo" kann der Sensor beliebig benannt werden

#define reference 115 //Referenzwert für die Messung(kann je nach Sensor etwas abweichen). Der Referenzwert kann ermittelt werden,
                      //indem man den Sensor in ein Glas Wasser stellt (also 100% Feuchtigkeit), mit xyz.getBodenfeuchtigkeit(Analoger-Pin,reference,FORMAT_RAW)
                      //den neuen Referenz-Wert ermittelt und diesen danach in #define reference abändert oder direkt in den getBodenfeuchtigkeit-Befehl hineinschreibt. WICHTIG!!

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("FORMAT_RAW-Wert(Analoger Eingangswert):        ");
  Serial.println(demo.getBodenfeuchtigkeit(0,reference,FORMAT_RAW)); // Allgemeines Format: xyz.getBodenfeuchtigkeit(Analoger-Pin,reference,Ausgabeformat).
                                                                     // Ausgabeformat kann entweder FORMAT_RAW(Ausgabe des Analogen Wertes) oder FORMAT_PERCENT(Ausgabe des Prozent Wertes) sein.
  Serial.print("FORMAT_PERCENT-Wert(Errechneter Prozent-Wert): ");
  Serial.print(demo.getBodenfeuchtigkeit(0,reference,FORMAT_PERCENT));
  
  Serial.println(" %");
  
  Serial.print("\n");
  delay(500);
}
