/** 
 * Arduino Tutorial: Learn how to use analog input and digital output
 * More info: https://github.com/RochesterMakerSpace/ArduinoClass
 */

// Initialize the Arduino
setup() {
  pinMode(12,OUTPUT);
}

// Loop forever checking the status of the photoresistor and controlling the LED
loop() {
	// Read the photoresistor value (0-1024)
    int sensorValue = analogRead(A0);

    // Adjust the sensitivity as desired.  Initial value is 500.
    if (sensorValue < 500) {
		// It's dark.  Turn on the LED.
        digitalWrite(12,HIGH);
    } else {
		// It's not too dark.  Turn off the LED.
        digitalWrite(12,LOW);
    }
	
	// No real need to delay here, but a delay can help avoid flickering
    // when the light level is close to the threshold value.
    delay(10);
}
