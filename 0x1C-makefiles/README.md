# C - Makefiles
A special file that contains instructions for how to compile and build software projects.

![Makefile meme](https://miro.medium.com/v2/resize:fit:640/format:webp/0*QELAbVGLP0wheqzo.jpg)

## Description
Makefile sets a set of rules to determine which parts of a program need to be recompile, and issues command to recompile them. Makefile is a way of automating software building procedure and other complex tasks with dependencies. Makefile contains: dependency rules, macros and suffix(or implicit) rules.

## Features
 * **Variables:** The CC variable specifies the compiler to use (GCC), and the CFLAGS variable specifies compiler flags (Wall for warnings and g for debugging).
 * **Targets and Dependencies:** The all target depends on the program target. The program target depends on main.c and functions.c source files. The command under the program target compiles the source files into an executable named "program."
 * **Commands:** The actual commands are indented with a tab character.

## Usage
```shell
# Makefile

# Variables
CC = gcc
CFLAGS = -Wall -g

# Targets and Dependencies
all: program

program: main.c functions.c
    $(CC) $(CFLAGS) -o program main.c functions.c

clean:
    rm -f program
```

## Credits
 * [GNU make](https://www.gnu.org/software/make/manual/html_node/)
 * [How to install make on Ubuntu](https://www.geeksforgeeks.org/how-to-install-make-on-ubuntu/)
 * [Compiling Programs with Make](https://web.stanford.edu/class/archive/cs/cs107/cs107.1194/resources/make)

## Contact
 * [Sakhile Ndlazi](https://www.twitter.com/sakhilelindah)
