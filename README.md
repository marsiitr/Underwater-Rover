# Underwater-Rover
Srishti 2019
![](https://github.com/ayushkumardixit/Underwater-Rover/blob/master/Images%20%26%20Videos/IMAGES/Main%20Body%20under%20water.jpeg)
# Abstract
It is a remote controlled rover. It can reach at any coordinate in 3D space underwater and can stay there for any amount of time. Having variable angular velocities of all the 4 motors , it can travel very smoothly and efficiently . With a secure waterproofing it can go beyond 10 meter depth easily. Functioning of this rover in water is similar to that of a drone in air. It can be mounted with a wide range of weights which this rover can carry to a destination anywhere underwater.
## Motivation
Humans have been able to explore only about 20% of sea life. With the help of this bot we can know sea life in a much better way.
## Mechanical Aspect
1. A suitable motor should be choosed such that it counterbalance drag forces and also produces enough thrust . Here we have used DC motor of 300 RPM.
2. The whole system should be waterproof . so , we have used different types of wax and vaseline at shaft of motor to prevent from water.
3. We have used 4 motors in which 2 of them provides vertical thrust and other 2 provides horizontally . with help of these we can rotate it in a horizontal plane and also we can travel vertically .
![](https://github.com/ayushkumardixit/Underwater-Rover/blob/master/Mechanical%20Design/Solidworks%20screenshot.png)
 ## Electronic aspect
1. The Arduino code acts as a 4-button controller with a switch, controlling 4 motors via 2 motor drivers.
2. When the switch is in ON state, all the motors move in clockwise direction. Thus enabling  UP and FORWARD movement. 
3. When the switch is in OFF state, all the motors move in anticlockwise direction, thus enabling DOWN and BACKWARD movement. 
4. In both the switch's states, RIGHT and LEFT is possible.
5. It drives each motor with the same PWM value signal of 240
 ## Cost Structure 
 | Materials  | Cost(INR) |
| ------------- | ------------- |
| 4 Motors | 700 |
| Mid body | 200  |
| 3D Printing  | 400 |
| Arduino UNO  |400 |
| 2 Motor Driver  | 300 |
| Battery and other material | 250  |
| Total | 2250 |
## Applications
1. It can carry weight upto almost 4 times the weight of the rover itself. Hence, it can be used for transportation underwater.
2. If mounted with a net, it can collect garbage from polluted rivers like River Ganga.
3. It can detect dead bodies sunk inside water which can further be take out.
4. If mounted with a camera , it can spy enemies and provide with useful information to the navy.
5. It can also navigate sea life. We can explore sea life like endangered species in a better way.
## Limitation
1.This rover can not work beyond a certain depth, because of increase in pressure, water will begin to enter inside the body 
2. we have to check that frequency of the wave  that we are using should not match with frequency produced by vibration of motors and also should not  match with the resonace frequency.
## Future Improvements
1. It can be made wireless with help of devices like Bluetooth.
2. By improving electronic system and mechanical strength, it can reach greater depths.
## Team Member
1. [Ayush Kumar Dixit](https://github.com/ayushkumardixit)
2. [Masih Ahmed](https://github.com/anon766)
3. [Parth Gupta](https://github.com/parthg2211)
4. [Rahul Panjwani](https://github.com/rahulpanjwani)
## Mentor
1. Abhishek Sehgel
2. Riya Bhalla
## References
1. https://www.seaperch.org/action/document/download?document_id=592
2. https://www.solidworks.com (Solidworks)
3. https://www.arduino.cc (Arduino)
4. https://www.youtube.com/channel/UCtwaWPOXEBysZLh1rrPzwFw
5. https://youtu.be/wIcCz5m9LwQ
