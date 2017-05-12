#include "SoftwareSerial.h"

SoftwareSerial Receiver(0, 1);

void setup(){
    Receiver.begin(9600);
}

void loop(){
    if(Receiver.available()){
      	Receiver.println(Receiver.read());
    	digitalWrite(13, HIGH);
    } else
      	Receiver.println("Falhou: Nada foi recebido");
    	digitalWrite(13, LOW);
    }

	Receiver.println(Receiver.read());
	delay(500);
}
