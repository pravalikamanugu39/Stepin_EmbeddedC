# Stepin_EmbeddedC

[![Codacy Badge](https://api.codacy.com/project/badge/Grade/13b74afff6b6486a899340bb716237ee)](https://app.codacy.com/gh/pravalikamanugu39/Stepin_EmbeddedC?utm_source=github.com&utm_medium=referral&utm_content=pravalikamanugu39/Stepin_EmbeddedC&utm_campaign=Badge_Grade_Settings)
[![Code Inspector](https://www.code-inspector.com/project/28692/score/svg)

[![Code Inspector](https://www.code-inspector.com/project/28692/status/svg)

[![Cppcheck](https://github.com/pravalikamanugu39/Stepin_EmbeddedC/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/pravalikamanugu39/Stepin_EmbeddedC/actions/workflows/CodeQuality.yml)
[![Compile-Linux](https://github.com/pravalikamanugu39/Stepin_EmbeddedC/actions/workflows/Compile.yml/badge.svg)](https://github.com/pravalikamanugu39/Stepin_EmbeddedC/actions/workflows/Compile.yml)


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
|![OFF](https://github.com/pravalikamanugu39/Stepin_EmbeddedC/blob/7bc960bd1a8445aa6fc6a9d36d8bbb5b2cc44da5/simulation/Step_1Diagrams/Step_1OFF.PNG) |![ON](https://github.com/pravalikamanugu39/Stepin_EmbeddedC/blob/678299ac37ed3a0e8e123d14af219f16c4c90c68/simulation/Step_1Diagrams/Step_1ON.png)|

## Step-2
|OFF|ON|
|:--:|:--:|
|![OFF](https://github.com/pravalikamanugu39/Stepin_EmbeddedC/blob/678299ac37ed3a0e8e123d14af219f16c4c90c68/simulation/Step_2Diagrams/Step_2OFF.png) |![OFF](https://github.com/pravalikamanugu39/Stepin_EmbeddedC/blob/678299ac37ed3a0e8e123d14af219f16c4c90c68/simulation/Step_2Diagrams/Step_2ON.png)

## Step-3
|![diagram](https://github.com/pravalikamanugu39/Stepin_EmbeddedC/blob/678299ac37ed3a0e8e123d14af219f16c4c90c68/simulation/Step_3.png)
