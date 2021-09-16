
# Stepin_EmbeddedC

[![Codacy Badge](https://api.codacy.com/project/badge/Grade/13b74afff6b6486a899340bb716237ee)](https://app.codacy.com/gh/pravalikamanugu39/Stepin_EmbeddedC?utm_source=github.com&utm_medium=referral&utm_content=pravalikamanugu39/Stepin_EmbeddedC&utm_campaign=Badge_Grade_Settings)
[![Cppcheck](https://github.com/pravalikamanugu39/Stepin_EmbeddedC/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/pravalikamanugu39/Stepin_EmbeddedC/actions/workflows/CodeQuality.yml)
[![Compile-Linux](https://github.com/pravalikamanugu39/Stepin_EmbeddedC/actions/workflows/Compile.yml/badge.svg)](https://github.com/pravalikamanugu39/Stepin_EmbeddedC/actions/workflows/Compile.yml)
![CodeInspector](https://www.code-inspector.com/project/28692/score/svg)
![CodeInspector](https://www.code-inspector.com/project/28692/status/svg)
## Embedded C Project

### Seat Heat Application System

### Principle
This system is basically used to control the temperature inside a vehicle(Car). Whenever the user  gets seated inside the car, the button sensor gets activated. After that, the user gets access to turn on the heater. Temperature will be monitored by the temperature sensor and tha analog value will be sent to microcontroller,***Atmega328***.

### Simulation

The operation of the heat control system is coded in embedded c and the working is demonstrated using a simuation software called ***SimulIDE***.

This system is usually done in 3 steps or in 3 activities

*   When the two switches are closed, the first LED glows indicating the actuation of the system and the heater.
*   Then the analog input from the temperature sensor is received and digitized using ADC.
*   The digitized temperature input is visualized using Pulse Width Modulation.
 
## Step-1 

|OFF|ON|
|:--:|:--:|
|![](https://github.com/pravalikamanugu39/Stepin_EmbeddedC/blob/9e1bbc09de7fbb13429fcead3f12e3324fd0578e/6_Images/Step_1OFF.PNG)|![](https://github.com/pravalikamanugu39/Stepin_EmbeddedC/blob/9e1bbc09de7fbb13429fcead3f12e3324fd0578e/6_Images/Step_1ON.png)|

## Step-2
|OFF|ON|
|:--:|:--:|
|![](https://github.com/pravalikamanugu39/Stepin_EmbeddedC/blob/9e1bbc09de7fbb13429fcead3f12e3324fd0578e/6_Images/Step_2OFF.png)|![](https://github.com/pravalikamanugu39/Stepin_EmbeddedC/blob/9e1bbc09de7fbb13429fcead3f12e3324fd0578e/6_Images/Step_2ON.png)|

## Step-3
|![](https://github.com/pravalikamanugu39/Stepin_EmbeddedC/blob/9e1bbc09de7fbb13429fcead3f12e3324fd0578e/6_Images/Step_3.png)|

