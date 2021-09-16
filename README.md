# Embedded C Programming Examples with Continuous Integration and Code Quality

# embedded_systems_project

## Heat Control System 

### CI and Code Quality

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/259881/Embedded-sys/actions/workflows/Compile.yml/badge.svg)](https://github.com/259881/Embedded-sys/actions/workflows/Compile.yml)|[![Cppcheck](https://github.com/259881/Embedded-sys/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/259881/Embedded-sys/actions/workflows/CodeQuality.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/c91f2537b80d4e63963a289d345607a4)](https://www.codacy.com/gh/259881/Embedded-sys/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=259881/Embedded-sys&amp;utm_campaign=Badge_Grade)|

### Theory

The heat control system is basically used to control the temperature inside a car. Whenever the user or driver gets seated inside the car, the button sensor gets activated. After that, the user gets access to turn on the heater. The temperature sensor monitors the temperature and sends the analog value to the microcontroller. The microcontroller processes the analog input of the temperature sensor and outputs a temperature value through serial communication. All the activities of the control system are performed on the microcontroller, ***Atmega328***.

### Simulation

The operation of the heat control system is coded in embedded c and the working is demonstrated using a simuation software called ***SimulIDE***.
Below shown two images where in the 1st image shows the status of the simulation when the system is OFF and the second image shows the status of the system when it is ON. 

#### ON
![ON](https://github.com/259881/Embedded-sys/blob/dd9619d0bf5ec8510b388c13f65093cd88ac2d20/Simulation/Simulation_fnal.gif)

-----------------------------------------------------------------------------------------------------------------------------------

#### OFF
![OFF](https://github.com/259881/Embedded-sys/blob/63daabfd34aad10d20fc0353ba36f3eed21d5bf3/Simulation/Simulation_OFF.png)
------------------------------------------------------------------------------------------------------------------------------------
#### Outputs

|Circuit|RAM Table|
|:--:|:--:|
|![circuit](https://github.com/259881/Embedded-sys/blob/883bd20604d7552dbffed5447cfd061bc1803b4e/Simulation/Circuit.gif)|![Ram Table](https://github.com/259881/Embedded-sys/blob/233f462244119af26820fa5c5072e353ab16a4ae/Simulation/RAM_table.gif)|
|CRO|Serial Monitor|
|![CRO](https://github.com/259881/Embedded-sys/blob/b0dabf3e9307da78662215f941f1645bfdfb131b/Simulation/Oscilloscope.gif)|![Monitor](https://github.com/259881/Embedded-sys/blob/b0dabf3e9307da78662215f941f1645bfdfb131b/Simulation/Serial_Monitor.gif)|

### Function

* When the two switches are closed, the first LED glows indicating the actuation of the system and the heater.
* Next the analog input from the temperature sensor is received and digitized using ADC.
* The digitized temperature input is visualized using Pulse Width Modulation.
* The corresponding temperature values based on the digitized temperature input is transmitted by the UART protocol. Here the data is displayed on the serial monitor.

--------------------------------------------------------------------------------------------------------------------------------------------

## Activity_1
![Act1](https://github.com/259881/Embedded-sys/blob/84b68e77defa034239c5a0d180628e742bfaf1cc/Simulation/Activity_1.png)

---------------------------------------------------------------------------------------------------------------------------------------------

## Activity_2
![Act2](https://github.com/259881/Embedded-sys/blob/69e5d6d41ab7e30a3c4d7564f18f6de92c0b7269/Simulation/Activity_2.png)

--------------------------------------------------------------------------------------------------------------------------------------------

## Activity_3
![Act3](https://github.com/259881/Embedded-sys/blob/69e5d6d41ab7e30a3c4d7564f18f6de92c0b7269/Simulation/Activity_3.png)

----------------------------------------------------------------------------------------------------------------------------------------------

## Activity_4
![Act4](https://github.com/259881/Embedded-sys/blob/69e5d6d41ab7e30a3c4d7564f18f6de92c0b7269/Simulation/Activity_4.png)
