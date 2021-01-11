#include <IRremote.h>
#include <IRremoteInt.h>

// Inputs:
// 16753245 = CH-
// 16736925 = CH
// 16769565 = CH+
// 16720605 = PREV
// 16712445 = NEXT
// 16761405 = PLAY/PAUSE
// 16769055 = VOL-
// 16754775 = VOL+
// 16748655 = EQ
// 16738455 = 0
// 16750695 = 100+
// 16756815 = 200+
// 16724175 = 1
// 16718055 = 2
// 16743045 = 3
// 16716015 = 4
// 16726215 = 5
// 16734885 = 6
// 16728765 = 7
// 16730805 = 8
// 16732845 = 9

int LED = 2;
int RECEIVER_PIN = 13;

IRrecv receiver(RECEIVER_PIN);
decode_results results;

void setup(){
  Serial.begin(9600);
  receiver.enableIRIn();
  pinMode(LED, OUTPUT);
}

void loop(){
  delay(200);
  if(receiver.decode(&results)){
    printOut(results.value);
    receiver.resume();
  }
}

void blinkLED(int led, int timeAmount){
  digitalWrite(led, HIGH);
  delay(timeAmount);
  digitalWrite(led, LOW);
}

void printOut(int input){

  blinkLED(LED, 60);
  Serial.println(input);
  
  switch (input) {
    case 16753245:
      Serial.println("Input: CH-");
      break;
    case 16736925:
      Serial.println("Input: CH");
      break;
    case 16769565:
      Serial.println("Input: CH+");
      break;
    case 16720605:
      Serial.println("Input: PREV");
      break;
    case 16712445:
      Serial.println("Input: NEXT");
      break;
    case 16761405:
      Serial.println("Input: PLAY/PAUSE");
      break;
    case 16769055:
      Serial.println("Input: VOL-");
      break;
    case 16754775:
      Serial.println("Input: VOL+");
      break;
    case 16748655:
      Serial.println("Input: EQ");
      break;
    case 16738455:
      Serial.println("Input: 0");
      break;
    case 16750695:
      Serial.println("Input: 100+");
      break;
    case 16756815:
      Serial.println("Input: 200+");
      break;
    case 16724175:
      Serial.println("Input: 1");
      break;
    case 16718055:
      Serial.println("Input: 2");
      break;
    case 16743045:
      Serial.println("Input: 3");
      break;
    case 16716015:
      Serial.println("Input: 4");
      break;
    case 16726215:
      Serial.println("Input: 5");
      break;
    case 16734885:
      Serial.println("Input: 6");
      break;
    case 16728765:
      Serial.println("Input: 7");
      break;
    case 16730805:
      Serial.println("Input: 8");
      break;
    case 16732845:
      Serial.println("Input: 9");
      break;
    default:
      Serial.println("Wrong input received.");
      break;
  }
}
