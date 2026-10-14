# Digital Counter Using Arduino Uno

## Project Overview
This project implements a digital counter that displays numbers from 0 to 30 using an Arduino Uno, two CD4511 BCD-to-7-segment decoder ICs, and two 7-segment displays.

One display represents the tens digit, while the other represents the units digit.

## Objectives
- Design a digital counter using Arduino Uno.
- Convert BCD inputs into 7-segment display signals using CD4511 ICs.
- Display numbers from 00 to 30.
- Understand digital outputs, BCD encoding, and decoder operation.

## Components Required
- Arduino Uno
- 2 × CD4511 BCD-to-7-segment decoder ICs
- 2 × Common-cathode 7-segment displays
- Breadboard and jumper wires
- Current-limiting resistors

## Pin Connections

### Tens Display
| CD4511 Input | Arduino Pin |
|---|---|
| A | D2 |
| B | D3 |
| C | D4 |
| D | D5 |

### Units Display
| CD4511 Input | Arduino Pin |
|---|---|
| A | D6 |
| B | D7 |
| C | D8 |
| D | D9 |

The CD4511 segment outputs connect to the corresponding a–g display segments through current-limiting resistors.

## Working Principle
The Arduino generates a count from 0 to 30. Integer division by 10 determines the tens digit, and the remainder determines the units digit. Both digits are sent as 4-bit BCD values to their respective CD4511 decoders.

The decoder ICs activate the required display segments. The counter updates every second and repeats after reaching 30.

## Software and Tools
- Arduino C/C++
- Tinkercad Circuits
- Arduino Uno
- CD4511 BCD decoders

## Expected Output
00 → 01 → 02 → ... → 09 → 10 → ... → 29 → 30 → 00

## Applications
- Digital counting systems
- Electronic counters
- Digital electronics learning
- Embedded systems demonstrations

## Author
Add your name here.
