# Bitnine Internship Coding Test (Questesion 1)

## Introduction

This is a C program that defines a data structure called Node and four functions that perform arithmetic operations and calculate the Fibonacci sequence.

## Program Structure

The Node data structure has two fields: type, which is an enumerated data type that can be one of four values (ADD, SUB, MUL, FIBO), and value, which is an integer that stores the result of the operation or the Fibonacci number.

The four arithmetic functions (add, sub, mul, and fibo) take two integer arguments and return a pointer to a Node that represents the result of the operation. The fibo function also takes into account the special case when the input is 0 or 1.

The makefunc function takes a TypeTag argument and returns a function pointer to the corresponding arithmetic function. This allows for more flexibility and dynamic selection of operations.

In the main function, four Node pointers are created using the makefunc function to perform arithmetic operations and calculate the Fibonacci sequence. The results are printed to the console.

## How to run the code

To run the code, you will need a C compiler and a standard C library. On Windows, you can use the [MinGW](http://www.mingw.org/) compiler or you can see this tutorial (https://www.freecodecamp.org/news/how-to-install-c-and-cpp-compiler-on-windows/).
On Linux, you can use the `gcc` compiler. To compile the code, run the following command:

```bash
gcc -o fibonnaci fibonnaci.c
```

On Windows, you can run the executable by running the following command:

```bash
fibonnaci.exe
```

On Linux, you can run the executable by running the following command:

```bash
./fibonnaci
```

## Output

The output of the code is as follows:

```bash
OUTPUT:
add = 16
mul = 20
sub = -4
fibo = 2
```

## References

- [C Programming Tutorial](https://www.programiz.com/c-programming)
- [C Programming Language](<https://en.wikipedia.org/wiki/C_(programming_language)>)
- [C Standard Library](https://en.wikipedia.org/wiki/C_standard_library)
- [C Enumerated Types](https://www.tutorialspoint.com/cprogramming/c_enumerated_types.htm)
- [C Function Pointers](https://www.tutorialspoint.com/cprogramming/c_function_pointers.htm)
- [C Dynamic Memory Allocation](https://www.tutorialspoint.com/cprogramming/c_dynamic_memory_allocation.htm)
- [C Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
- [C Structures](https://www.tutorialspoint.com/cprogramming/c_structures.htm)

## Contact

If you have any questions, feel free to contact me at es-mostafaadel2023@gmail.com
