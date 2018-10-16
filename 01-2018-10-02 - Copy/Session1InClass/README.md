### Lab, In-Class Exercise, and Homework for Week 1 ###

#### General Development Warm-Up, Developing Systems With Multiple Interacting Classes ####

#### Together in the lab ####

##### Background #####

The class lecture is on building big software systems.  Flow of discussion is that "divide and conquer" is
essential, and in order to do divide and conquer, we need modularity.  Then "object orientation" is 
one way to achieve modularity, and it does so naturally because the module encapsulates both data and
functionality (procedures).  We should specifically make the point that one big part of this
class will be to figure out how to (a) define module boundaries, and (b) then how to characterize what
a module does.   So from the beginning emphasize the interface, and the contract.  The details of inheritance, 
overloading, etc etc etc are ways to implement -- but from the beginning we need to work on the "what" -- i.e.
design in addition to the "how".

So this lab should point out the ways we make those decisions as a system gets bigger.

#####  The Main Scenario

Start with a traditional Hello World problem.  Due to popular demand, it wants to become a general-purpose
"greeting" system -- that will display a customized greeting to each user under a variety of contexts.

Checkpoint #1
Simple "Hello world" in one class.

How does this become a general greeting system?

Change #1 -- the current implementation both "computes" the greeting and prints it.
Principle of single responsibility

Checkpoint #1
Simply break it into a greeting generator (returns a string) and the main program that prints it.
Maybe even three classes

Next extension:  customize to display the name.  And let's anticipate other customizations as well.
Can't be in the driver, and can't be in the greeting generator at least not directly.  
Also let's anticipate other customizations.  So we will pass in a dictionary -- that will give us 
some flexibility as to where runtime information will come from.

Note the conundrum -- does this customization information come from the driver (i.e. command line)
or from other runtime information.   For example, get the login username from the system.   
For now let the driver be responsible for the dictionary, but notice the contract -- 
the driver is responsible to the greeter generator for all customization information.

Change #2 

How would we handle more than one argument input?  Let's think of the idea of a "template" --
something like "Hello $name, you have nice $eyecolor eyes"
This is called variable interpolation in other languages -- String.format does something like this, but 
the list of variables is pre-compiled.

First design would be something like providing the template at construction, then arguments with the parse.

Checkpoint #3 -- We have a template language and an application that generates a greeting with 
more than one variable.

-------------------------

##### Individually in the lab #####

Your customer would like to have the greeting customized with the time of day, for example instead
of saying "Hello Taylor" it might say "Good afternoon Taylor"

Assume a daypart is defined as follows
  *  MORNING is after 5AM but at or before 12 noon
  *  AFTERNOON is after noon but at or before 5PM
  *  EVENING is after 5PM but at or before 8PM
  *  NIGHT is after 8AM but at or before 5PM
  
 Extend the template language to include a variable $daypart, and have the system compute
 the appropriate string to describe that time of day.
 
 Base assignment:   base the time of day on the system clock.  You can use LocalTime() for this.
 
 Extra credit:  the module that computes the day part should can also be given a string suitable 
 for LocalTime.parse(String) and computes the day part using that time.  You need not modify the
 driver or template language, just give the daypart module that extra functionality.
   
Here is a description of my project's functionality!