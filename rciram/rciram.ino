#include "gerakan.h"
#include "dabble.h"

void setup(){
  setdabble();
  setroda();
}

void loop(){
  delay(20);
  tombol();
  if(go){
    if(up) {         //will be TRUE as long as button is pressed
      gerakmaju();
      if(circle)
        gerakkanan();
      else if(squar)
        gerakkiri();
    }
    else if(down){
      gerakmundur();
      if(circle)
        gerakkanan();
      else if(squar)
        gerakkiri();
      }
    else if(right){
      putarkanan();
    }
    else if(left){
      putarkiri();
    }
    else{
      mandeg();
    }
  }
}
