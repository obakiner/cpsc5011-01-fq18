This is a small reference program to show how C/C++ handles command-line arguments
  * To be executable, a function must be named main, must return an int, and must have either 0 or 2 arguments
  * If the number of arguments is 0, command-line arguments are ignored
  * If the number of arguments is 2, they must be
    * an int, typically called argc
    * an array of C-strings, (notated char*).  The array will be of length argc, and is typically called argv
    
This program just loops through its arguments and prints each of them.  You will notice that a program always has at least one argument, which is the absolute path of the executable being run.

The convention for Unix-like systems is that then the arguments come in key/value pairs.   The key begins either with one dash (old style) or two dashes (new style).   So if we wanted to pass in a command-line variable with key "name" and value "Fred" our command line arguments would be 
    --name Fred

These arguments don't have to be quoted unless they contain special characters for the shell (for example % or " or |).  In this case when the program is run, argc will be 3,  argv[1] will be the string "--name" and argv[2] fill be the string "Fred".

There are lots of libraries for processing the command-line argument vector and doing things like checking for unknown arguments, allowing abbrevation (e.g. saying "--n" instead of "--name" if that abbrevation is unique), declaring whether an a key needs a value (e.g. you can just say "--verbose" without an argument) -- then turning all that into a dictionary for easy program use.

If you were running the program from a shell, you would provide the arguments on the command line, like the following example from Windows -- same program run from PowerShell

```
PS C:\Users\hanks\...\Debug> ./CommandLineArgs.exe --name Fred
There are 3 command line arguments
Value of arg 0 is C:\Users\hanks\Documents\GitHub\cpsc5011-01-fq18\07-2018-11-13-command-line-args\Debug\CommandLineArgs.exe
Value of arg 1 is --name
Value of arg 2 is Fred
```

If you right-click on the project in project explorer, you select 
1.  Run As  -> Run Configurations ...
2.  You should see an item  C/C++ Application, possibly with your executable name as a sub-item
3.  There is an configuration menu associated with that build configuration.  It has a tab Arguments, and within that tab there is a text block where you type the command-line arguments, in this case --name Fred
4.  Now if you rerun the project it will supply those arguments to the executable and you should see them on the console
