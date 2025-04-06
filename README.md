# Morse Code LED

This Arduino code transmits a message in Morse code using an LED.

## Hardware

-   Arduino
-   LED (with resistor)

## Setup

1.  Connect LED to Arduino pin `LEDPIN` (default: 2).
2.  Upload the code.

## Usage

-   Edit `message` to change the transmitted text (uppercase only).
-   Edit `DOT` to adjust speed.

## Code

-   `LEDPIN`: LED pin.
-   `DOT`: Dot duration (ms).
-   `message`: Text to transmit.
-   `morseAlphabet`: Morse code lookup.
