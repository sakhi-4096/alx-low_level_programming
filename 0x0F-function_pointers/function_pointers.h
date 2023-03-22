#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * print_name - execute a function given as a parameter
 * @name: parameter that function ptr needs
 * @f: function to execute
 */
void print_name(char *name, void (*f)(char *));

#endif
