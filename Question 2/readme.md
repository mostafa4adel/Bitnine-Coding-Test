# Bitnine Internship Coding Test (Question 2)

## Introduction

The objective of this question is to Implment a simple reccurence relation of Fibonnaci series using 3 diffrent ways.

## Methodology

### Method 1: Iterative Method

This method is the most basic method to implement the Fibonnaci series. It uses a for loop to iterate through the series and calculate the next number in the series.

Space Complexity: O(1)
Time Complexity: O(n)

### Method 2: Recursive Method

This method uses a recursive function to calculate the next number in the series. It is the most intuitive method to implement the series.

Space Complexity: O(n)
Time Complexity: O(2^n)

### Method 3: Dynamic Programming Method

This method uses a dynamic programming approach to calculate the next number in the series. It uses a list to store the previous numbers in the series and uses them to calculate the next number.

Space Complexity: O(n)
Time Complexity: O(n)

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
Enter the number of the term you want to calculate: 10
The 10th term of the fibonnaci sequence is: 55
The 10th term of the fibonnaci sequence is: 55
The 10th term of the fibonnaci sequence is: 55
```

## Conclusion

The iterative programming method is the most efficient method to implement the Fibonnaci series as it has the best time complexity and space complexity.

## References

1. https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/

## Contact

If you have any questions, feel free to contact me at es-mostafaadel2023@gmail.com
