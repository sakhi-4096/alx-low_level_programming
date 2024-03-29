# C - Function pointers # 
------
* **Function pointers** *-  are variables that can store the memory address of functions and can be used in a program to create a function call to functions pointed by them. Also called a subroutine pointer or procedure pointer, is a pointer that points to a function. As opposed to referencing a data value, a function pointer points to executable code within memory.*

### General Objectives ###
 * What are function pointers and how to use them 
 * What does a function pointer exacty hold
 * Where does a function pointer point to in the virtual memory

------

### Notes: ###

1) Unlike normal pointers, a function pointer points to code, not data. Typically a function pointer stores the start of executable code.
2) Unlike normal pointers, we do not allocate de-allocate memory using function pointers.
3) A function’s name can also be used to get functions’ address.
4) Like normal pointers, we can have an array of function pointers.
5) Function pointer can be used in place of switch case.
6) Like normal data pointers, a function pointer can be passed as an argument and can also be returned from a function.
7) Many object oriented features in C++ are implemented using function pointers in C.

------

0 - Write a function that prints a name.
 * Prototype: void print_name(char *name, void (*f)(char *));

1 - Write a function that executes a function given as a parameter on each element of an array.
 * Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
 * where size is the size of the array
 * and action is a pointer to the function you need to use

2 - Write a function that searches for an integer.
 * Prototype: int int_index(int *array, int size, int (*cmp)(int));
 * where size is the number of elements in the array array
 * cmp is a pointer to the function to be used to compare values
 * int_index returns the index of the first element for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1

3 - Write a program that performs simple operations.
 * You are allowed to use the standard library
 * Usage: calc num1 operator num2
 * You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int
 * operator is one of the following:
	 * +: addition
	 * -: subtraction
	 * *: multiplication
	 * /: division
	 * %: modulo
 * The program prints the result of the operation, followed by a new line
 * You can assume that the result of all operations can be stored in an int
 * if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
 * if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
 * if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100

------
### Author ###
* Sakhile Ndlazi
