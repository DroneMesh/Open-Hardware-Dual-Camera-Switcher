// DroneMesh FPV Camera Switch Sketch
// By Time Operation Sketch switch Change Camera feed every X seconds

int CAM1 = 1; // Camera 1 ATTINY85 Pin
int CAM2 = 4;  // Camera 2 ATTINY85 Pin
int TIME = 5000; // Change Camera every 5 seconds


void setup()
{
 
  pinMode(CAM1, OUTPUT); // CAM1 Enable Pin
  pinMode(CAM2, OUTPUT);  // CAM2 Enable Pin
}



void loop()
{

        digitalWrite(CAM1, LOW);  // Turn Cam 1 Off 
        digitalWrite(CAM2, HIGH); // Turn Cam 2 On
        
        delay(TIME); // Wait 5 Seconds
        
        digitalWrite(CAM2, LOW); // Turn Cam 2 Off 
        digitalWrite(CAM1, HIGH);  Turn Cam 1 On
           
        delay(TIME);  // Wait 5 Seconds
 }
