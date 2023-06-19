# C - Dynamic Libraries
A shared library/dynamic library is a library that is loaded dynamically at runtime for each application that requires it. Dynamic Linking doesn’t require the code to be copied, it is done by just placing name of the library in the binary file. The actual linking happens when the program is run, when both the binary file and the library are in memory.

### General
 * What is a dynamic library, how does it work, how to create one, and how to use it
 * What is the environment variable **$LD_LIBRARY_PATH** and how to use it
 * What are the differences between static and shared libraries
 * Basic usage **nm, ldd, ldconfig**

---
### Sources
 * [Differences between static and dynamic libraries](https://www.linkedin.com/pulse/differences-between-static-dynamic-libraries-juan-david-tuta-botero#:~:text=What%20are%20the%20differences%20between,outside%20of%20the%20executable%20file.)
 * [Static and Dynamic libraries](https://blog.devgenius.io/static-and-dynamic-libraries-c-programming-language-ae570b75038e)
 * [Static Libraries vs. Dynamic Libraries](https://medium.com/@StueyGK/static-libraries-vs-dynamic-libraries-af78f0b5f1e4)
 * [Static and Dynamic Libraries | Set 1](https://www.geeksforgeeks.org/static-vs-dynamic-libraries/)

### Author
 * Sakhile Ndlazi
