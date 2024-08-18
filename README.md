# Vector Calculator

## Introduction

The **Vector Calculator** is a C++ application designed to perform basic vector arithmetic operations. This program allows users to add, subtract, and compute the dot product of two vectors. It is a simple yet effective tool for anyone interested in understanding vector mathematics or applying it in various computational tasks.

## File Structure

The project contains a single source code file:

```
VectorCalculator.cpp
```

This file includes all the necessary functions and main execution logic to perform vector calculations.

## Installation Requirements

### Visual Studio Code (VSCode)

To run and edit the `VectorCalculator.cpp` file, you'll need to have the following installed:

1. **Visual Studio Code (VSCode)**: You can download and install it from [here](https://code.visualstudio.com/).

2. **C++ Extension for VSCode**: Install the C++ extension by Microsoft, which provides support for C++ development in VSCode.

3. **C++ Compiler**: Ensure that you have a C++ compiler installed, such as `g++` for GCC. You can install GCC on Windows via [MinGW](http://www.mingw.org/), on macOS using [Homebrew](https://brew.sh/) with `brew install gcc`, or on Linux using your package manager, e.g., `sudo apt-get install g++` on Ubuntu.

## How to Run the File (Test Cases)

To run the `VectorCalculator.cpp` file, follow these steps:

1. **Open the project**: Open the folder containing `VectorCalculator.cpp` in VSCode.

2. **Build the project**:
   - Open the terminal in VSCode.
   - Compile the C++ file using the following command:

     ```bash
     g++ -o VectorCalculator VectorCalculator.cpp
     ```

   - This will generate an executable file named `VectorCalculator`.

3. **Run the executable**:
   - In the terminal, run the compiled program:

     ```bash
     ./VectorCalculator
     ```

4. **Input vectors**:
   - The program will prompt you to enter the components of two vectors.
   - Follow the on-screen instructions to input vector values and choose an operation (addition, subtraction, dot product).

5. **Test Cases**:
   - For example, you can test the program with vectors (1, 2, 3) and (4, 5, 6) to see results for addition, subtraction, and the dot product.

## License

