# C - Bit manipulation  # 
* **Bit manipulation** *- is the act of algorithmically manipulating bits or other pieces of data shorter than a word.Ccomputer programming tasks that require bit manipulation include low-level device control, error detection and correction algorithms, data compression, encryption algorithms, and optimization.At the heart of bit manipulation are bitwise operators &(AND), |(OR), ~(NOT) and ^(XOR), there are also bit shifts, <<(bit shift left) >>(bit shift right).*

------

### General Objectives ###
 * How to manipulate bits and use bitwise operations

![bitwise](https://he-s3.s3.amazonaws.com/media/uploads/cb985c2.png)

------

0 - Write a function that converts a binary number to an unsigned int.
 * Prototype: unsigned int binary_to_uint(const char *b);
 * where b is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
	* there is one or more chars in the string b that is not 0 or 1
	* b is NULL:

1 - Write a function that prints the binary representation of a number.
 * Prototype: void print_binary(unsigned long int n);
 * Format: see example
 * You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators

2 - Write a function that returns the value of a bit at a given index.
 * Prototype: int get_bit(unsigned long int n, unsigned int index);
 * where index is the index, starting from 0 of the bit you want to get
 * Returns: the value of the bit at index index or -1 if an error occured

3 - Write a function that sets the value of a bit to 1 at a given index.
 * Prototype: int set_bit(unsigned long int *n, unsigned int index);
 * where index is the index, starting from 0 of the bit you want to set
 * Returns: 1 if it worked, or -1 if an error occurred

4 - Write a function that sets the value of a bit to 0 at a given index.
 * Prototype: int clear_bit(unsigned long int *n, unsigned int index);
 * where index is the index, starting from 0 of the bit you want to set
 * Returns: 1 if it worked, or -1 if an error occurred

5 - Write a function that returns the number of bits you would need to flip to get from one number to another.
 * Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
 * You are not allowed to use the % or / operators

---
### Sources ###
 * [Basics of Bit manipulation](https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/)
 * [Summary of bit manipulation](https://leetcode.com/problems/sum-of-two-integers/solutions/84278/A-summary:-how-to-use-bit-manipulation-to-solve-problems-easily-and-efficiently/)
 * [Bitwise operations for beginners](https://codeforces.com/blog/entry/73490)
 * [Fun with bits](https://www.topcoder.com/thrive/articles/A%20bit%20of%20fun:%20fun%20with%20bits)

------
### Author ###
* Sakhile Ndlazi
