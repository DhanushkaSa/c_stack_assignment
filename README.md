# Reverse Polish Calculator (RPN) in C

This project is a simple Reverse Polish Notation (RPN) Calculator developed using the C programming language. The calculator uses a stack data structure to perform arithmetic operations such as addition, subtraction, multiplication, and division.

## Features

* Push numbers into the stack
* Perform arithmetic operations:

  * Addition (+)
  * Subtraction (-)
  * Multiplication (*)
  * Division (/)
* Display the current stack
* Show the top value of the stack
* Handle stack overflow and underflow
* Prevent division by zero errors

## Technologies Used

* C Programming Language
* Stack Data Structure
* Code::Blocks / VS Code

## How It Works

The calculator follows the Reverse Polish Notation (Postfix Expression) method. Numbers are pushed into the stack first, then operators are applied to the top two values in the stack.

Example:
3 4 + 5 *

Step 1:
Push 3 and 4

Stack:
3 4

Step 2:
Apply +

Stack:
7

Step 3:
Push 5

Stack:
7 5

Step 4:
Apply *

Stack:
35

Final Result:
35

## Learning Outcomes

Through this project, I learned:

* Stack implementation using arrays
* Push and Pop operations
* Switch-case statements
* Functions in C
* Error handling
* Basic calculator logic


