#### In-Class Code Structure

When we run through a series of examples in class, I will try to stick to the following structure in class, and in any case I will clean it up out of class.

* All code for the class in one project
  * An exception for this week because I wanted a second project to demonstrate command-line arguments
  * Each topic will be in a separate source file like main3.cpp
  * Each such file will have a main() method
  * But all but one main() methods will be commented out
  
So if you wanted to run the code in main6.cpp you would
  * Uncomment its main method
  * Make sure all the other main methods are commented out
  * Build and then run the project
  
Topics for this week (one per main method)
1.  First Hello World showing program structure, and how console output works.  Introduce C++ string class
2.  Split the hello world functionality into another function, showing how functions are declared (.h file) and implemented (.cpp file).  Function arguments and return values.
3.  Introduce the built-in C types and the idea that since they each have a limited number of bits, there is a range of numbers they can represent.  
4. Show what happens when you "overflow" a variable. Show casting from one type to another.  Show the concept of Boolean in C/C++
5.  Input from the console
6.  Vectors -- the C++ equivalent of Lists
7.  Structs -- a lightweight container solution 