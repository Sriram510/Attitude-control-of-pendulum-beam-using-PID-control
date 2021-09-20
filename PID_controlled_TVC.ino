#include <Servo.h>
#include "MPU9250.h"
MPU9250 mpu;
Servo TVC;
float elapsedTime, time, timePrev;
float PID, pwmLeft, pwmRight, error, previous_error;
float pid_p=0;
float pid_i=0;
float pid_d=0;
/////////////////PID CONSTANTS/////////////////
double kp=3.55;//3.55
double ki=0.005;//0.003
double kd=2.05;//2.05
///////////////////////////////////////////////
float desired_angle = 30;

void setup() {
  TVC.attach(3);
   Serial.begin(115200);
    Wire.begin();
    delay(2000);

    if (!mpu.setup(0x68)) {  
        while (1) {
            Serial.println("MPU connection failed. Please check your connection with `connection_check` example.");
            delay(5000);
        }
    }
    mpu.setAccBias(-24.09,30.17,-8.51);
    mpu.setGyroBias(-2.12,-1.06,-1.01);
    mpu.setMagBias(263.46,746.21,-219.43);
    mpu.setMagScale(1.56,0.55,1.87);
}

void loop() {
  timePrev = time; 
    time = millis();  
    elapsedTime = (time - timePrev) / 1000;
    error = mpu.getRoll() - desired_angle; 
    pid_p = kp*error;
    if(-3 <error <3)
{
  pid_i = pid_i+(ki*error);  
}
pid_d = kd*((error - previous_error)/elapsedTime);

PID = pid_p + pid_i + pid_d;  
if(PID < -90)
{
  PID=-90;
}
if(PID > 90)
{
  PID=90;
}
int tvcAngle=90+PID;
previous_error = error;
}
