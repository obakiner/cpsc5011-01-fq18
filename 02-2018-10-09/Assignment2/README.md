### Lab, In-Class Exercise, and Homework for Week 2 ###

#### Encryption and Password Management -- The Contract and Unit Testing ####

##### Together in the lab #####

1. Go over basic concept of encryption, stressing the contract
  * a string to string mapping, 
  *  if s1 == s2 then encrypt(s1) must == encrypt(s2)
  *  if s1 != s2 then encrypt(s1) must probably != encrypt(s2)
  *  it must be difficult to infer s1 from encrypt(s1)
  *  if decrypt(s) is defined, then decrypt(encrypt(s)) == s
1. Set up later exercises with for example hash-based encryption, so we can do another exercise on multiple classes

Today we will deal with a simple form of encryption called substitution cypher, which defines a mapping from characters to characters.   You could do this by defining the mapping explicitly (i.e. a dictionary) or by a method like what the Caesar Cypher does:  just define an indexed set of characters and an offset.

Encryptor interface -- string to string encrypt.  Possible decrypt, introduce OperationNotImplementedException
Caesar cypher -- takes an offset.  Discuss how we choose and communicate the set of characters -- in this case we will choose to pre-enumerate the character set as an array of characters.   This is mainly so we can use it for 
password applications that have restrictions on character sets.

In class, develop the class using a fixed set of characters. Also consider two 
implementations, one that maintains two arrays, one which does the offset each time.
Discuss the pros and cons of each alternative.

Emphasize starting by making the contract clear, writing unit tests, and test-based development.

##### Individually in the lab #####

Extend the implementation of Caesar Cypher to do decryption -- see how much code you can share with encrypt.
Extend unit tests.

Extra credit:  implement ROT13

---------------------------------------
#### Homework Assignment (Major Assignment) ####

In this assignment we are going to implement a simple *password vault* -- think of LastPass only much simpler, 
and we're building a Java class not a browswer plugin.

A *user* is the client for the vault.   She has a username and a vault password, and uses the vault to store (site / password) pairs for a variety of sites.   In a real vault a username might be a long string like an email address and a site would be a long URL, but for our example we will use short usernames like "josie" and "whocares" and short site names like "amazon" "google" "netflix."  

The vault supplies the following operations:

  1.  Add a new user to the vault (with no site passwords).  A username and password is supplied, and the system 
  does no verification or checking except that the username and password must be in correct formats, and the 
  username cannot already be in the vault.
  1.  Add a new password for a (known) site.  For example, if a user is creating an account at the site "amazon" for the first time, she calls the vault with the site name, and the site makes up a password for the user/site, returns the plain text password to the user, and stores the (encrypted) password -- all stored passwords in the vault
 must be encrypted.  
  1.  Retrieve the password for a site.  If the user has a stored password for the site, it is returned in plain text.
  1.  Request a new password for a site, for example the user wants to change her password on Amazon, and the system generates a new password, stores an encrypted version for the user, and returns the plaintext version.

For security reasons, if a user tries three operations with an incorrect password, that user
is locked out:  prohibited from doing any operation until the user is unlocked.

In addition, the following conditions are mandatory 
  * All user-ids are strings of at least and at most twelve lower-case letters
  * All site names are strings of at least six and at most lower-case letters
  * All passwords -- both vault passwords and site passwords -- must satisfy these conditions
      - Be between six and 15 characters long
      - Contain at least one letter and one digit
      - Contain at least one special character from the set !@#$%^& 
  * The **Vault** must store all passwords encrypted
  * The **Vault** does not need to deal with deleting users or changing vault passwords or deleting site passwords for a user or unlocking a user

------------------------

##### Your Implementation #####

1.  There will be a single class **Vault** for the password vault.  It can store all of its information in memory -- we will save database connections and file storage for another day
1.  You will provide extensive unit tests for these classes
1.  A main method / console app is optional for extra credit (see below)

1.  I will supply you with Javadoc for an implementation of the class and also stubbed-out source code.  You must follow this template *exactly* (otherwise the unit tests I will use to evaluate your solution will break, and that will make us all unhappy).  You may use our implementation of Caesar Cypher from the lab session.

** Extra Credit **

1.  You will notice that there is no way to unlock a user once she is locked out.  Design an implement
a secure way to unlock users (i.e. don't let any user unlock any user!)

1.  Write a menu-driven console app that uses the vault.   It will simulate the idea of a user being logged on, and will have the following commands --
  1.  Add new user
  1.  User logs on and off
  1.  User adds site
  1.  User requests new password for site
  1.  User retrieves existing password for site

  In each case the menu app prompts for the required inputs and prints an informative message after performing the command.
  
  I will point you to a library that makes building menu-based console applications very easy.
  

  