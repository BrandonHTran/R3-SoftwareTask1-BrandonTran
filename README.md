# R3-SoftwareTask1-BrandonTran
 Repository for the first software task of R3.

Links:
TinkerCAD: https://www.tinkercad.com/things/8T6pTK2RtVY

 This project contains 
 1 x Arduino Uno
 2 x 7 Segment Displays
 1 x Potentiometer 
 Resistors ranging from 200Ω to 1kΩ

 The purpose of this project is read the output of a potentiometer and display it using the two Seven Segment displays. The numbers of the display range from 0-99. 

 With regards to the TinkerCAD diagram, 

 The 5V and Ground are connected to their respective parts on the breadboard with red signifying positive and the black wire as negative. The green wire connected from A0 to the potentiometer is used as input and is the main component of this project. 

 On the right side on the Arduino, Pins 0-6 are connected to the first 7 Segment display and Pins 7-13 are connected to the second display. 

 Simulation:
 When the simulation starts, the user can adjust the potentiometer and the Seven segment will display a number from 0-99 depending on how much voltage it is providing. For example a reading of 5V would display 99 and 0V would be display 00. 

Complications: 
I could not get the Decoders t proerly work so I left them out of the TinkerCAD to test whether or not the project would still function properly. 
