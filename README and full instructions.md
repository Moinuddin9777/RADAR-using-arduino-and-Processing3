# RADAR-using-arduino-and-Processing3
This is one of my personal projects using arduino UNO.
here we can make a basic fully fuctional radar which detects objects or obstructions in its range.
Languages used in this are Arduino and Java.

Hardware used: Arduino UNO board, HC-SR04 Ultrsonic sensor, Servo motor, jumper wires, Arduino Cable.

Software used: Aruino IDE, Processing3.

other matierial: Bracket mount for HC-SR04 Sensor, Double sided tape. if you don't have a bracket mount you can make one using cardboard.

# work in PROCESSING 3.
* Dowload the software from processing.org or simply search for "download processing 3" in any search engine.
* After downloading the zip file extract it .
* Now you need to install a library called "ToxicLibs".
* Once you open the extracted folder you will find the processing application. Open it.
* Once the processing IDE is open goto "Sketch" in the Menu bar. You will get a drop down.
* From that select "Imoprt Library..." then click on "Add Library..." this will open another window named "Contribution Manager".
* You can find a search bar there, in it search for "ToxicLibs" and install it.
* Now after installing this library dump your code in the IDE.
* Make sure you change your COM port number to the COM port you are using your Arduino on.
# CONNECTIONS FOR ARDUINO
* Servo
  * Vcc to 5V (typically red)
  * Ground to Ground(typically black)
  * pin to pin 11 on arduino
* Ultrasonic Sensor
  * Vcc to 5V 
  * Trig to pin 9 
  * Echo to pin 10
  * GND to GND of arduino
* Now dump the Aruino code in the board
# WORKING
Upload the code to Arduino after making the connections.  You can observe the servo sweeping from 0degrees to 180degrees and again back to 0degree.
  Since the Ultrasonic Sensor is mounted over the Servo, it will also participate in the sweeping action.  
	Now, open the processing application and paste the above given sketch.   
	In the Processing Sketch, make necessary changes in the COM Port selection and replace it with the COM Port number to which your Arduino is connected to.(AS SAID IN Line21)
  If you note the Processing Sketch, I have used the output display size as 1280×720 (assuming almost all computers now-a-days have a minimum resolution of 1366×768) and made calculation with respect to this resolution.
  In the future, I will upload a new Processing sketch where you can enter the desired resolution (like 1920×1080) and all the calculations will be automatically adjusted to this resolution.
	Now, run the sketch in the Processing and if everything goes well, a new Processing window opens up
  Check the output by placing objects in the range of the sensor.(sample images provided in the repository).
