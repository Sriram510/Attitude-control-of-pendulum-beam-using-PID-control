# Attitude-control-of-pendulum-beam-using-PID-control

# This repository contains the projects that I made to develop understanding of PID control for use in rocket attitude control.

## Sensors and materials used:
###### 1. MPU9250 to calculate tilt angle using quaternions.
###### 2. ArduinoUNO microcontroller.
###### 3. MG90 servo with 720 coreless DC motor attached to it's arm.
###### 4. Rest apparatus are used to build frame and fasten things up.
###### 5. Supports and power supply for convenient operation.

# How does a PID controller work?
###### A simple PID loop can be depicted as follows:-
![A-generic-closed-loop-process-control-system-with-PID-controller](https://user-images.githubusercontent.com/90887611/134111312-7c4a618d-8d0b-46f4-bed4-f440fadc8458.png)
###### 1.Starting from the setpoint assignment to the PID output completely operates inside the microcontroller.
###### 2.The plant, in this case the pendulum beam pivoted about C.G, the angle of it which has to controlled or maintain at desired state.
###### 3. The process here, the angle of air flow from the motor applies torque on the plant and that in turn control the angle of tilt.

## Applying the analogy of the PID diagram(above) to our situation we get the following sketch:-
![TVC](https://user-images.githubusercontent.com/90887611/134112277-e456b1fa-4876-4d41-ad39-498809cc8fa2.png)
###### NOTE: The rocket here is replaced by the pendulum beam(cardboard cutout)!! and the TVC mount with servo motor connected with DC motor to it's arm.


## Step 1.The system model was obtained using newton's laws of motion.
## Step 2.Angle of servo arm is used as the control actuator with attached DC motor for thrust.
## Step 3.The system(plant) was made as shown in the video below with proper connections and the beam was pivoted around the centre of gravity.
## Step 4.Control algorithm was made using simple PID controller in C++ using arduinoUNO microcontroller.
## Step 5. Proper tuning of PID gains was performed iteratively to match desired respose from the system.
## Step 6. Disturbing the tilt angle stimulates the controller to stabilize the angle(in this case 30degrees of the vertical was chosen) of the beam to desired state.
***NOTE : Due to imperfections in system design(friction as nonlinearity,power fluctuations) it oscillates upon staying in desired setpoint.***






https://user-images.githubusercontent.com/90887611/133923463-083fb2d6-455f-45d7-b34f-ac2ca555e0f9.mp4

***Application :: This same principle can applied to maintain or control the rocket's attitude(roll,pitch,yaw) in flight actively as oppposed to passive fins which increases drag and hence reduce payload capacity.As the variables(mass of rocket and the moment of inertia) are constantly changing response characteristics of the system will change(though minor).To compensate for this gain scheduling control(PID gains for different states) can be opted.***







