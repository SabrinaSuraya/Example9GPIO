#include "Blinky.h"

Blinky leds[8];


void setup() {
    leds[0].Initialize('D', 0, 781, 515);
    leds[1].Initialize('D', 1, 2014, 1348);
    leds[2].Initialize('D', 2, 343, 573);
    leds[3].Initialize('D', 3, 678, 1839);
    leds[4].Initialize('D', 4, 342, 534);
    leds[5].Initialize('D', 5, 1478, 326);
    leds[6].Initialize('D', 6, 1859, 351);
    leds[7].Initialize('D', 7, 777, 888);

    for(;;){
          for(int i=0; i<8; i++){
              leds[i].Refresh();
          }
    }

}

void loop() {
  // put your main code here, to run repeatedly:

}
