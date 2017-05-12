#include "SoftwareSerial.h"

SoftwareSerial Sender(0, 1);

void setup (){
    Sender.begin(9600);
}

void loop(){
    Sender.write("H");
    delay(500);
    Sender.write("L");
	delay(500);
}
