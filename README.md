# SmartCalc v1.0

## Chapter I

### Introduction

This project entails the implementation of SmartCalc v1.0, an advanced calculator, in the C programming language using structured programming principles. In addition to basic arithmetic operations, SmartCalc v1.0 aims to support the evaluation of arithmetic expressions following order of operations and includes various mathematical functions such as sine, cosine, and logarithms.

The calculator will also offer the functionality of using the variable _x_ and plotting corresponding functions. Moreover, enhancements such as a credit and deposit calculator will be considered.

## Chapter II

### Information

#### Polish Notation and Reverse Polish Notation

Polish notation, developed by Jan Lukasiewicz, and reverse Polish notation (RPN), introduced by Charles Hamblin, offer alternative ways of expressing arithmetic expressions. These notations eliminate the need for parentheses and are widely used in computing.

#### Dijkstra's Algorithm

Edsger Dijkstra devised an algorithm, known as the "shunting-yard algorithm," to convert expressions from infix to reverse Polish notation. This algorithm utilizes a stack-based approach to efficiently process tokens in an expression.

## Chapter III

### Part 1. Implementation of SmartCalc v1.0

The SmartCalc v1.0 program must be developed with the following specifications:

- Written in C language of C11 standard using gcc compiler
- Code located in the src folder
- Built with Makefile containing standard targets
- Developed according to structured programming principles
- Follow Google style guide
- Full coverage of modules related to calculating expressions with unit-tests using the Check library
- GUI implementation using any GUI library with API for C89/C99/C11
- Support for both integers and real numbers with optional exponential notation
- Ability to calculate expressions after pressing the `=` symbol
- Support for arbitrary bracketed arithmetic expressions with or without the _x_ variable
- Graph plotting of functions with limited domain and codomain
- Verifiable accuracy of fractional part up to 7 decimal places
- Input of up to 255 characters
- Support for arithmetic operations and mathematical functions, including trigonometric and logarithmic functions

### Part 2. Bonus. Credit Calculator

An additional feature of SmartCalc v1.0 includes a "credit calculator" mode with options to input credit details and obtain monthly payments, overpayment, and total payment.

### Part 3. Bonus. Deposit Calculator

Another bonus feature is the "deposit profitability calculator" mode, allowing users to input deposit details and receive information on accrued interest, tax amount, and final deposit amount.

