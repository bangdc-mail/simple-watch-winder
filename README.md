
# ⌚ DIY Arduino Simple Watch Winder

This project is a DIY Watch Winder built using an Arduino, designed to keep your automatic watches wound and ready to wear. A watch winder mimics wrist motion to prevent watches from stopping when not in use. This repository aims to help you with creating such watch winder in the simplest way possible. Further iteration or inprovements are welcomed. Feel free to take inspiration and improve on it.

## Bill of Materials (BOM)

#### Items' pricing can be varied depending on where and when they are purchased.


| Component | Price    | What it is used for        |
| :-------- | :------- | :------------------------- |
| `Arduino Nano` | `$2.52` | **This can be replaced with an Arduino UNO or any similar component**. Used for controlling the motor RPM speed, steps, etc... as prefered. |
| `28BYJ-48 Stepper Motor (5V)` | `$0.7` | **Bought this with the Driver**. A Step motor to spin the Watch and help with winding, 5V for Arduino pin output. |
| `Driver ULN2003` | `$0.35` | **Bought this with the Stepper Motor**. Use for controlling the Motor, should be the middle-man between the Motor and the Arduino. |
| `Shaft coupler` (5mm) | `$0.2` | **Or any alternatives that can connects the Motor shaft with other components**. Connects motor shaft with watch box. Can pair with M3 screws.|
| `Jump wires - female to female` x 6 | `$0.2` | **F - F**. Wire to connects between the components. 4 for the digital pins, 2 for power and ground. |
| `A Watch box` | `$0.0` | **Or any random box**. Use to hold the watch and also act as the base. Can be made out of wood if fancy |

**Total (based on purchased parts)**: $3.97 - Very Cheap comparing to $18.99 of the Cheapest Watch winder found on Amazon (at the time of writing)


## Installation

#### Required Softwares and Preparations:
- Install Arduino IDE (visit https://www.arduino.cc/en/software)
- Add Stepper library (ref: https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries/)
- Make sure to have CH340 driver (Arduino chip)

#### Schematics
![Arduino UNO Schematic](https://placeholder.com/468x300?text=App+Screenshot+Here)

![Arduino Nano Schematic](https://placeholder.com/468x300?text=App+Screenshot+Here)

Rough sketch:
![drawing](https://github.com/user-attachments/assets/e09c9399-2688-4e90-b282-d1290edcaee4)


## Screenshots
The following is a POC using simple cardboards. 

* A prototype no. 0 using cardboards
<img src="https://github.com/user-attachments/assets/f13b0455-c479-44ba-ad87-b7cd720c6c08" style="max-width: 100%;"/>
* Simple wiring for prototype
<img src="https://github.com/user-attachments/assets/be10668c-e425-44e5-8a0f-f86d5ba12d2d" style="max-width: 100%;"/>
* With a watch attached
<img src="https://github.com/user-attachments/assets/87134881-b25c-4c86-b092-fdf69ccdb6b8" style="max-width: 100%;"/>

After making, few things that can be noted:
- the base would require weight for stability
- The base of the motor should be heavily secure to avoid wobling
- The motor shaft is under big tension and would require counter weight for long use. Recommend to use lighter 


## Demo

It worked. Link of working demo should be added in the future.


## Acknowledgements

 - [DIY Watch winder - 2019](https://www.youtube.com/watch?v=9rfCjYOQ4L8)
 - [Arduino 101 - Mark Rober](https://www.youtube.com/watch?v=yi29dbPnu28)

#### Posible improvements
 - [Watch Winder Project - Silent Stepper Motor](https://www.youtube.com/watch?v=Qs1taQb9djQ)
 - [Stepper Motor Watch Winder - no library](https://github.com/cv127001/Arduino-Watch-Winder/blob/main/Arduino_Stepper_Motor_Project_CV.ino)

