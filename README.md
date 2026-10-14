# Digital Counter Using Arduino Uno

## Project Overview
This project implements a digital counter from 0 to 30 using an Arduino Uno, two CD4511 BCD-to-7-segment decoder ICs, and two 7-segment displays.

One display shows the tens digit, and the other shows the units digit.

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

The CD4511 outputs connect to the matching a–g display segments through current-limiting resistors. Connect the common-cathode terminals to GND.

## Working Principle
The Arduino counts from 0 to 30. Integer division by 10 determines the tens digit, while the remainder determines the units digit. The Arduino sends each digit as a 4-bit BCD value to its CD4511 decoder.

The counter updates every second and repeats after reaching 30.

## Software and Tools
- Arduino C/C++
- Tinkercad Circuits
- Arduino Uno

## Expected Output
00 → 01 → 02 → ... → 09 → 10 → ... → 29 → 30 → 00

## Applications
- Digital counting systems
- Embedded systems demonstrations
- Digital electronics learning

## Author
Daivala Ramu
TinkerCad Link : https://www.tinkercad.com/things/fhxoXhjfaQR-copy-of-copy-of-assignment-2
<img width="1916" height="913" alt="Screenshot 2026-10-14 193212" src="https://github.com/user-attachments/assets/b1d20195-d601-47b6-a1f3-ef9aa8ecfd50" />

