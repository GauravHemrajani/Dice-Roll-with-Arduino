# Dice-Roll-with-Arduino
#Project Overview
Dice Roll with Arduino is an interactive project that simulates a dice roll using an Arduino, a pushbutton, and a 7-segment display. When the pushbutton is pressed, a loading animation is shown on the 7-segment display, followed by a random number between 1 and 6 — simulating a roll of a dice. This project is perfect for beginners looking to improve their understanding of Arduino basics and creating fun, interactive electronic projects.

#How It Works
Pushbutton Activation: Pressing the pushbutton initiates the dice roll process.
Loading Animation: A "loading circle" effect is displayed on the 7-segment display by lighting up each segment in a sequence to give an illusion of rotation.
Random Dice Roll: After the loading animation, a random number between 1 and 6 is generated, which is then displayed on the 7-segment display to simulate a dice roll.

#Materials Used
Arduino UNO: The main microcontroller board that powers the project.
7-Segment Common Cathode Display: Displays the loading animation and the dice roll result.
Pushbutton: Used to trigger the dice roll.
Breadboard: A prototyping board to connect components.
Jumper Wires: Wires to connect the Arduino, display, and pushbutton.

#Code Breakdown
The code is designed to handle the following functions:

Setup and Initialization: Configures the pins connected to the 7-segment display and the pushbutton. It also initializes the random number generator.
Loading Circle Animation: Uses a sequence of digital writes to create a circular animation on the 7-segment display.
Random Dice Roll: When the button is pressed, a random number between 1 and 6 is generated and displayed on the 7-segment.
Display Functions: Individual functions for each number (1 to 6) display the corresponding segments on the 7-segment display.

#Code
You can find the code in the mainCode file
