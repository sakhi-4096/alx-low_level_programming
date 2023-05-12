# C - simple_shell_practice 
* **shell program** *- a shell is a computer program that exposes an operating system's services to a human user or other programs. In general, operating system shells use either a command-line interface (CLI) or graphical user interface (GUI), depending on a computer's role and particular operation. It is named shell becuase it is the outermost layer around the operating system.*

### General Objectives
 * Who designed and implemented the original Unix operating system
 * Who wrote the first version of the UNIX shell
 * Who invented the B programming language (the direct predecessor to the C programming language)
 * Who is Ken Thompson
 * How does a shell work
 * What is a pid and ppid
 * How to manipulate the environment of the current process
 * What is the difference between a function and system call
 * How to create processes
 * What are the three prototypes of **main**
 * How does the shell use **PATH** to find the programs
 * How to use execute another program with the execve system call
 * How to suspend the execution of a process until one of its children terminates
 * What is **EOF** / "end-of-file"?

![The Gates of Shell by Spencer Cheng featuring Julien Barbier](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/235/shell.jpeg)

---
### Allowed functions
 * access, chdir, close, closedir, execve, exit, _exit, fflush, fork, free, getcwd, getline, getpid, isatty, kill, malloc, open, opendir, perror, read, readdir, signal, stat, lstat, fstat, strtok, wait, waitpid, wait3, wait4, wait5, write 
 * Function check:
 	```shell
	sakhi@ubuntu:~/0x16. nm hsh | grep ' U '
	```
 * Coding style: [Betty](https://github.com/holbertonschool/Betty)

---
### Compilation
```shell
sakhi@ubuntu:~/0x16. gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

---
### Exercises
##### PID & PPID
0. getpid
 * Write a program that prints the PID of the parent process. Run your program several times within the same shell. It should be the same. Does echo $$ print the same value? Why?
1. /proc/sys/kernel/pid_max
 * Write a shell script that prints the maximum value a process ID can be.

##### Arguments
0. av
 * Write a program that prints all the arguments, without using ac.
1. Read line
 * Write a program that prints "$ ", wait for the user to enter a command, prints it on the next line.
 ```shell
 sakhi@ubuntu:~/0x16. man 3 getline
 ```
 * **important** make sure you read the man, and the RETURN VALUE section, in order to know when to stop reading Keyword: “end-of-file”, or EOF (or Ctrl+D).
 * **advanced** Write your own version of getline.
2. command line to av
 * Write a function that splits a string and returns an array of each word of the string.
 ```shell
 sakhi@ubuntu:~/0x16. man strtok
 ```
 * **advanced** Write the function without strtok

---
### Sources
 * [Unix shell](https://en.wikipedia.org/wiki/Unix_shell)
 * [Thompson shell](https://en.wikipedia.org/wiki/Thompson_shell)
 * [Ken Thompson](https://en.wikipedia.org/wiki/Ken_Thompson)
 * [Shell (computing)](https://en.wikipedia.org/wiki/Shell_(computing))
 * man pages `open(2), read(2), write(2), close(2), access, chdir(2)`
 	```shell
	sakhi@ubuntu:~/0x16. man 2 open
	```
		 
---
### Author
* Sakhile Ndlazi
