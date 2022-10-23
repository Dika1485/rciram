#define CUSTOM_SETTINGS
#define INCLUDE_GAMEPAD_MODULE
#include <Dabble.h>

bool up=0,down=0,left=0,right=0,triangle=0,squar=0,circle=0,cross=0,start=0,select=0,pernahstart=0,go=1;

void setdabble(){
  Serial.begin(9600);
  Dabble.begin(9600);
}
void tombol(){
  Dabble.processInput();
  up=GamePad.isUpPressed();
  down=GamePad.isDownPressed();
  right=GamePad.isRightPressed();
  left=GamePad.isLeftPressed();
  squar=GamePad.isSquarePressed();
  circle=GamePad.isCirclePressed();
  triangle=GamePad.isTrianglePressed();
  cross=GamePad.isCrossPressed();
  start=GamePad.isStartPressed();
  select=GamePad.isSelectPressed();

  if(start){
    if(pernahstart){
      start=0;
    }
    else{
      pernahstart=1;
    }
  }
  else{
    pernahstart=0;
  }
  if(start){
    go!=go;
  }
}
