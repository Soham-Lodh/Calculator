🧮 Calculator
A CLI-based C program that serves as a multi-purpose calculator, supporting:

📊 Arithmetic Operations

🔢 Matrix Operations (partial support)

🧭 Vector Operations

⚛️ Complex Number Operations

🚀 Features
1. 🔢 Arithmetic Calculator (a)
Executes basic arithmetic between two numbers:

➕ Addition (+)

➖ Subtraction (-)

✖️ Multiplication (*)

➗ Division (/)

🧮 Modulus (%)

🔺 Power (^)

2. 🧮 Matrix Calculator (m)
Supports operations between 2D matrices:

➕ Addition (+) – same dimensions

➖ Subtraction (-) – same dimensions

✖️ Multiplication (*) – compatible dimensions

🔢 Sum of All Elements (^) – single matrix

🔷 Sum of Diagonal Elements (#) – trace

💡 Note:
Inverse, transpose, determinant, and scalar multiplication are not available.
Matrix dimension compatibility is not auto-checked – ensure inputs are valid.

3. 🧭 Vector Calculator (v)
Operates on 3D vectors:

➕ Addition (+)

➖ Subtraction (-)

🔘 Dot Product (.)

🔄 Cross Product (*)

4. ⚛️ Complex Number Calculator (i)
Handles operations between two complex numbers:

➕ Addition

➖ Subtraction

✖️ Multiplication

🛠️ How to Compile and Run
bash
Copy code
gcc main.c -o calc
./calc
You’ll be prompted to select a mode:

pgsql
Copy code
Import Calculator
[a for arithmetic calculator]
[m for matrix calculator]
[v for vector calculator]
[i for complex calculator]
:- a
Enter Operation to perform [+ for addition]
Enter first number: 5
Enter second number: 3
Result: 8
📌 Notes
Matrices are dynamically allocated using malloc.

All inputs are interactive via the terminal.

Matrix dimensions must be manually validated by the user.

👨‍💻 Author
Made by Soham Lodh
Feel free to fork and extend the program!
