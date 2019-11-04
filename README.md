# GPS
getting the latitude and longitude values from the GPSmodule
This code is to just print the lattitude and longitude values on the serial monitor with the help of UART present in the atmega328p (Arduino UNO).

connections:

	ARDUINO --	GY-GPS6MU2
	VCC 	==> 	3.3V
	GND 	==> 	GND
	GPIO-8  ==>	TX
	GPIO-9	==>	RX

step1:	Make the connections as mentioned above.

step2:	Upload the code (GPSwithArduino.ino) to the board.

step3:	open serial monitor.

step4:	cross verify the values in google-maps.

/* As I verified the accuraccy is 99 */

Verified and uploaded by Vinod Talikoti
Contact: vinodtalikoti@gmail.com
