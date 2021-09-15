# Stepin_EmbeddedC
# Embedded C Project

### Seat Heat Application System

### Principle
This system is basically used to control the temperature inside a vehicle(Car). Whenever the user  gets seated inside the car, the button sensor gets activated. After that, the user gets access to turn on the heater. Temperature will be monitored by the temperature sensor and tha analog value will be sent to microcontroller,***Atmega328***.

### Simulation

The operation of the heat control system is coded in embedded c and the working is demonstrated using a simuation software called ***SimulIDE***.

This system is usually done in 3 steps or in 3 activities

 * When the two switches are closed, the first LED glows indicating the actuation of the system and the heater.
 * Then the analog input from the temperature sensor is received and digitized using ADC.
 * The digitized temperature input is visualized using Pulse Width Modulation.
 
## STEP-1 
#### OFF
![OFF](https://github.com/pravalikamanugu39/Stepin_EmbeddedC/blob/7bc960bd1a8445aa6fc6a9d36d8bbb5b2cc44da5/simulation/Step_1Diagrams/Step_1OFF.PNG)

-----------------------------------------------------------------------------------------------------------------------------------
