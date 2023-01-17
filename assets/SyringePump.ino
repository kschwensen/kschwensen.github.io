//Final

//run on button push + lights
//run on button push


#include <ezButton.h>
#include <AccelStepper.h>

ezButton button(8);  // create ezButton object that attach to pin 8;
ezButton cwbutton(10);  // create ezButton object that attach to pin 5;
ezButton ccwbutton(9);  // create ezButton object that attach to pin 6;
ezButton limitSwitch(7);  // create ezButton object that attach to pin 7;

int red_LED = 13;
int green_LED = 12;
int blue_LED = 11;



AccelStepper stepper(AccelStepper::DRIVER, 3, 2);
// GLobal Vars

float flow_rate = 5; //mL/min
bool is_twenty = false;
int steps = 3200; // steps/rot
float twenty_speed = flow_rate * steps * 0.0295;  //steps/s
float ten_speed = flow_rate * steps * 0.0513;  // steps/s


void setup() {
  Serial.begin(9600);
  button.setDebounceTime(50); // set debounce time to 50 milliseconds
  limitSwitch.setDebounceTime(50); // set debounce time to 50 milliseconds
  pinMode(red_LED, OUTPUT);
  pinMode(green_LED, OUTPUT);
  pinMode(blue_LED, OUTPUT);
  stepper.setMaxSpeed(1000);
  
   if (is_twenty == true){
       stepper.setSpeed(-twenty_speed);
  } 
   else{
       stepper.setSpeed(-ten_speed);  
}
}

void loop() {
  cwbutton.loop(); // MUST call the loop() function first
  ccwbutton.loop(); // MUST call the loop() function first
  
  button.loop(); // MUST call the loop() function first
  int state = limitSwitch.getState();
  int btnState = button.getState();
  limitSwitch.loop(); // MUST call the loop() function first
  
  if ((btnState == 0) && (state == LOW)){
    analogWrite(green_LED, 0);
    analogWrite(red_LED, 255);
    int cwstate = cwbutton.getState();
    int ccwstate = ccwbutton.getState();
    if((cwstate == HIGH )  && (ccwstate == LOW )){
       stepper.setSpeed(800);
       stepper.runSpeed();
  }
    else if((cwstate == LOW )  && (ccwstate == HIGH)){
       stepper.setSpeed(-800);
       stepper.runSpeed();
  }

  }
  else if ((btnState == 0) && (state == HIGH)){
    stepper.runSpeed();
    analogWrite(green_LED, 255);
    analogWrite(red_LED, 0);
  }
  else if ((btnState == 1) && (state == HIGH)){

    analogWrite(green_LED, 255);
    analogWrite(red_LED, 255);
    int cwstate = cwbutton.getState();
    int ccwstate = ccwbutton.getState();
    if((cwstate == HIGH )  && (ccwstate == LOW )){
       stepper.setSpeed(800);
       stepper.runSpeed();
  }
    else if((cwstate == LOW )  && (ccwstate == HIGH)){
       stepper.setSpeed(-800);
       stepper.runSpeed();
  }


  }
  }
