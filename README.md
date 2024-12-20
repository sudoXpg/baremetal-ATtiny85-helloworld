# Baremetal ATtiny-85 programming
## Message Transmission using LED

This project demonstrates how to transmit a message ("HELLO WORLD") using an LED connected to an ATtiny85 microcontroller. Each character of the message is transmitted as its binary representation, with the LED blinking to represent binary `1` and `0`.

## How It Works
1. **Binary Encoding:**  
   Each character in the message is processed bit-by-bit, with the LED blinking ON for `1` and OFF for `0`.
2. **Timing:**  
   A delay of 200 ms is added between each bit to make the blinks visible.
3. **Infinite Loop:**  
   The message repeats indefinitely.

## Circuit Diagram
- Connect an LED to **PB1** of the ATtiny85 with a current-limiting resistor (330Ω recommended).
- The cathode of the LED connects to ground.

### Pin Configuration
| Pin   | Function         |
|-------|------------------|
| PB1   | LED Output       |


## License
This project is licensed under the [MIT License](LICENSE).
