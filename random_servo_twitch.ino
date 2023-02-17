#include <Servo.h>



Servo xservo;

Servo yservo;



int xpos;

int ypos;

long previousTime = 0;

long interval = 7000;

long randDelay = 1000;


void setup()

{

  xservo.attach(9);

  yservo.attach(10);
  randomSeed(analogRead(0));
}



void loop() {

  {

    unsigned long currentTime = millis();
    unsigned long ranDelay = random(7000, 12000);

    if (currentTime - previousTime > interval) {

      previousTime = currentTime;

    }




    delay (ranDelay);

    {

      ypos = random(180); //generate random value for y-servo

      yservo.write(ypos); //y-servo moves to new position

      delay(120);

    }

    {

      xpos = random(180); //generate random value for x-servo

      xservo.write(xpos); //x-servo moves to new position

      delay(120);



    }

  }
}
