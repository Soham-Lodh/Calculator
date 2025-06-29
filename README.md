# Calculator
This is a CLI C program that is a multi-purpose calculator, with the following modes of calculation:
Arithmetic Operations
Matrix Operations (partial support)
Vector Operations
Complex Number Operations

Features
1. Arithmetic Calculator (a)
Executes basic arithmetic between two numbers:
Addition (+)
Subtraction (-)
Multiplication (*)
Division (/)
Modulus (%)
Power (^)
2. Matrix Calculator (m)
Supports operations between 2D matrices:
Addition (+) – adds two matrices of equal dimensions.
Subtraction (-) – subtracts two matrices of equal dimensions.
Multiplication (*) – multiplies two matrices compatible.
Sum of All Elements (^) – adds all elements within one matrix.
Sum of Diagonal Elements (#) – calculates trace (diagonal sum) of a matrix.
Tip: Inverse, transpose, determinant, and scalar multiplication are not available.
3. Vector Calculator (v)
Operates on 3D vectors:
Addition (+)
Subtraction (-)
Dot Product (.)
Cross Product (*)
4. Complex Number Calculator (i)
Operates on operations between complex numbers:
Addition
Subtraction
Multiplication

How to Compile and Run
gcc main.c -o calc
./calc
You will then be asked to select a mode of operation.

Sample Usage
Import Calculator
[a for arithmetic calculator]
[m for matrix calculator]
[v for vector calculator]
[i for complex calculator]
:- a
Enter Operation to perform
[+ for addition]
Enter first number: 5
Enter second number: 3
Result: 8

Notes
Memory allocation for matrices is dynamic using malloc.
User inputs are all interactive through the terminal.
Matrix dimension compatibility is not auto-checked for mathematical correctness — the user needs to enter valid sizes.

Author
Made by Soham Lodh
You are welcome to fork and extend the program!
