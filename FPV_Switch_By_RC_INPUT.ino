// DroneMesh FPV Camera Switch Sketch
// Normal Operation Sketch with RC controller switch as input to choose camera

int IN1 = 0;  // PWM Signal 1000 to 2000
int CAM1 = 1; // Camera 1 ATTINY85 Pin
int CAM2 = 4;  // Camera 2 ATTINY85 Pin
int duration; // Duration of the pulse

void setup()
{
 
  pinMode(IN1, INPUT); // PWM input pin
  pinMode(CAM1, OUTPUT); // CAM1 Enable Pin
  pinMode(CAM2, OUTPUT);  // CAM2 Enable Pin
}



void loop()
{
  duration = pulseIn(IN1, HIGH);

   // If Signal is Above 1500 Use Camnera 2 Input    
  if (duration > 1500)
    {
      digitalWrite(CAM1, LOW);  // Turn Cam 1 Off 
      digitalWrite(CAM2, HIGH); // Turn Cam 2 On
    }

   // If Signal is Under 1500 Use Camnera 1 Input    
   if (duration < 1500)
    {
      digitalWrite(CAM2, LOW); // Turn Cam 2 Off 
      digitalWrite(CAM1, HIGH);  Turn Cam 1 On
    }

 }
