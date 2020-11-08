#ifndef _BLINKY_H_
#define _BLINKY_H_

class Blinky{

  uint8_t -port;
  uint8_t -pin;
  int -ONduration;
  int -OFFduration;
  int -ledState= LOW;
  unsigned long -previousMillis=0;

  unsigned char *D_writer= (unsigned char*) 0x2B; //set port D
  

  public: 
  Blinky( uint8_t port, uint8_t pin , int ONduration, int OFFduration){

    -port= port;
    -pin= pin;
    -ONduration= ONduration;
    -OFFduration= OFFduration;

 }

  void Refresh(){
    
            for(;;){///dela millis

              unsigned long currentTime = millis();

              if(((*D_writer) & 0b00000100) == 0){

                if(currentTime - previousTime >= -ONduration){// on time

                  PORTD |= << -pin;
                  previousTime= currentTime;
                  
                }
              }
              else{
                if(currentTime - previousTime>= -OFFduration){// of time
                  PORTD &= << -pin;
                  previous= currentTime;
                }
              }
            }
            

    }
  }
};



#endif
