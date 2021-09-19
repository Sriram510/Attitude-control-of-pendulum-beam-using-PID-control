# Attitude-control-of-pendulum-beam-using-PID-control

# This repository contains the projects that I made to develop understanding of PID control for use in rocket attitude control.

## Step 1.The system model was obtained using newton's laws of motion.
## Step 2.Angle of servo arm is used as the control actuator with attached DC motor for thrust.
## Step 3.The system(plant) was made as shown in the video below with proper connections and the beam was pivoted around the centre of gravity.
## Step 4.Control algorithm was made using simple PID controller in C++ using arduinoUNO microcontroller.
## Step 5. Proper tuning of PID gains was performed iteratively to match desired respose from the system.
## Step 6. Disturbing the tilt angle stimulates the controller to stabilize the angle(in this case 30degrees of the vertical was chosen) of the beam to desired state.
***NOTE : Due to imperfections in system design(friction as nonlinearity,power fluctuations) it oscillates upon staying in desired setpoint.***





https://user-images.githubusercontent.com/90887611/133923463-083fb2d6-455f-45d7-b34f-ac2ca555e0f9.mp4

***Application :: This same principle can applied to maintain or control the rocket's attitude(roll,pitch,yaw) in flight actively as oppposed to passive fins which increases drag and hence reduce payload capacity.As the variables(mass of rocket and the moment of inertia) are constantly changing response characteristics of the system will change(though minor).To compensate for this gain scheduling control(PID gains for different states) can be opted.***







