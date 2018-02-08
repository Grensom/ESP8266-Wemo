
#include <IRremote.h>

IRsend irsend;

#define a 4
#define b 5
#define c 6
#define d 7

void setup() {
  Serial.begin(9600);
  pinMode(a, INPUT);
  pinMode(b, INPUT);
  pinMode(c, INPUT);
  pinMode(d, INPUT);
}

void loop() {
  if (digitalRead(a) == HIGH) {
    irsend.sendNEC(0x57E3E817, 32); //Power Code
    Serial.println("Power");
    delay(500);
  }
  if (digitalRead(b) == HIGH) {
    irsend.sendNEC(0x57E3F00F, 32); //Volume Up Code
    Serial.println("Volume Up");
    delay(500);
  }
  if (digitalRead(c) == HIGH) {
    irsend.sendNEC(0x57E308F7, 32); //Volume Down Code
    Serial.println("Volume Down");
    delay(500);
  }
  if (digitalRead(d) == HIGH) {
    irsend.sendNEC(0x57E34AB5, 32); //Netflix Code
    Serial.println("Netflix");
    delay(500);
  }
}


