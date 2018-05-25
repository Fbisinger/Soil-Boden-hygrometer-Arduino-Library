/* ============================================
Arduino Boden-hygrometer/-feuchtigkeits-Sensor-Bibliothek
           2018 F.Bisinger

Diese Bibliothek misst mithilfe eines Bodenfeuchtigkeitsensors die Boden-
feuchtigkeit, und rechnet diese in Prozent um.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
===============================================
*/
#include "Bodenhygrometer.h"

Bodenhygrometer::Bodenhygrometer() {
}

int Bodenhygrometer::getBodenfeuchtigkeit(int analogPin, int reference, uint8_t format) {
  pinMode(analogPin,INPUT);
  _analogPin=analogPin;
  _reference=reference;
  _rawData=analogRead(_analogPin);
  _percentData=map(_rawData,1023,_reference,0,100);

    if(format==FORMAT_RAW){
      _output=_rawData;
      }
    else {
      _output=_percentData;
      }

  return _output;
}
