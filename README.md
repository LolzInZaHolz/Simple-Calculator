# Simple Calculator in C++

This program implements a basic calculator that handles standard arithmetic operations as well as exponent and square root calculation. It uses a class-based approach to organize operations and input handling.

---

## Overview

The application uses a `calculator` class containing:

- Two operands  
- An operator character  
- Functions for all supported operations

Operations are performed based on user input.

---

## Features

### Supported Operations
The calculator can perform:

- Addition (`a + b`)
- Subtraction (`a - b`)
- Multiplication (`a * b`)
- Division (`a / b`)
- Power (`a ^ b`)
- Square root (`√a`) through a dedicated function

### Input Format
The program reads input in the form:
a op b
For example:
5 * 9

### Output
The result of the chosen operation is printed directly.

---

## Notes

- Division does not include explicit checks for division by zero.
- Square root uses only the value of `a`.
- The program performs calculations using `long double` for improved precision.
- An invalid operator results in an error message.
