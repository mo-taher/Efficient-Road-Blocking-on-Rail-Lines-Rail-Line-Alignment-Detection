# Efficient-Road-Blocking-on-Rail-Lines-Rail-Line-Alignment-Detection System[image]

(https://user-images.githubusercontent.com/68026627/210097305-0332f3e5-f669-4b3e-b56d-0e2d4df05598.png)

Introduction:
Technology in this scientific era makes our lives better and ensures our safety and security. In our
daily life, we travel a lot; transportation is part and parcel of our life. Without the safety of
transportation, it is hard for passengers to travel from one place to another. Also, we often see
accidents occur for irresponsibility and alertness. On railroad crossings, thousands of accidents
happen every year, and thousands of people are killed.
People nowadays travel a lot using the railway system. There are many level crossing gates
inside and outside the city. These level-crossing gates are manually operated by a gatekeeper.
The gatekeeper gets a notification or message from the previous station and he does the
door-closing job. When the train leaves for the station the gatekeeper sends a message to the next
station. But this process sometimes may interrupt if some message passing system does not work
or fails to send a notification a disaster can happen.
11 people died. Seven others were critically injured as a train hit a microbus at a rail crossing in
Mirsharai of Chattogram today (July 29).[1] They ignored the gatekeeper's warning and ran into
the accident.
So in this project, we will use an automation system for closing and opening the Arduino
controller which will help automatically control the level crossing gate when the train arrives it
will automatically be closed and when the train leaves it will open the gate. Also if any object
comes under the gate while closing then a notification will be sent via buzzer.
Application Area:
We frequently witness accidents in our country as a result of poor management of the manual
labor rail line. Most often, accidents are fatal. We intend to install a system in the train lines that
effectively avoid fatal crashes. This concept can be used in a variety of other contexts, including
the coal industry or any other industry. When coal mining is taking place, the area becomes
significantly warmer and there is a lot of noise. Therefore, it would be dangerous for any worker
to enter the mining area at that time because they might not be able to hear any warning signals
owing to the loud noise. To avoid this, the idea of a roadblock can be extensively used here.
However, due to the safety and ease of availability of demo rail tack, we will be working on this
rather than on anything else.
3
Technology:
● Ultrasonic (Ultrasonic Sonar Sensor HC- SR04):
This widely used sensor, the HC-SR04-Ultrasonic Range Finder, is used in many
applications where it is necessary to measure distance and find objects.
The ultrasonic transmitter and receiver are formed by two projects that resemble eyeballs
on the front of the module. Like bats or dolphins, the HC-SR04 ultrasonic sensor uses
sonar to calculate the distance to an item.
In one compact package, this ultrasonic sensor module functions as a transmitter,
receiver, and control circuit. It is made of a highly practical and little design. It comes in
easy-to-use packaging and provides high-range accuracy and consistent readings. Unlike
Sharp rangefinders, its operation is unaffected by sunshine or dark materials (although
acoustically soft materials like cloth can be difficult to detect).
● IR Sensor:
Obstacle Avoidance Using Infrared There are two infrared transmitting and receiving
tubes on the IR Sensor Module (Active Low). The reflected IR waves are picked up by
the receiver tube when the transmitted light waves are reflected back. The processing is
done by the integrated comparator circuit, and the green indicator LED turns on.
The module has an output pin on its tail as well as a Vcc, GND, and a 3-wire interface.
3.3 to 5V levels are suitable for it to operate. A digital signal is sent by the output pin in
response to obstruction or reflectance. The operational range can be fine-tuned using the
onboard preset; the usable distance range is 2 cm to 80 cm.
● Force Sensitive Resistor 0.5":
4
This force-sensitive resistor has a sensing surface that is circular and 0.5 inches in
diameter. Depending on how much pressure is being applied to the sensing area, this FSR
will change its resistance.
The resistance decreases with increasing force. The FSR's resistance will be greater than
1M when no pressure is applied to it. This FSR can detect applied force in any location
between 100g and 10kg.
● Motor Driver (Motor Shield L293D):
The L293D chipset offers 0.6A per bridge (1.2A peak) with internal kickback protection
diodes and thermal shutdown protection. can power motors between 4.5 and 25 volts.
● Servo Motor (MG90s – Micro Metal Servo):
This motor will be used for controlling the gate.
