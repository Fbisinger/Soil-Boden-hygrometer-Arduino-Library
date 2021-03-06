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
#ifndef Bodenhygrometer_h
#define Bodenhygrometer_h
#include "Arduino.h"

#define FORMAT_RAW        1
#define FORMAT_PERCENT    2

class Bodenhygrometer {
  public:
  Bodenhygrometer();
  int getBodenfeuchtigkeit(int analogPin, int reference, uint8_t format=FORMAT_RAW);
  private:
  int _rawData;
  int _percentData;
  int _analogPin;
  int _reference;
  int _output;
};
#endif


