# Hi Everyone!
This repository is for students of __E-115__.  It will provide any and all code covered in labs/recitation.  The README will specify what is covered in each lab as well as when each lab was conducted.  Feel free to download this code and play with it, if you have any questions, please feel free to reach me at: _mfreema1@stevens.edu_

## Lab 3 - Integers, floats, doubles, and the iostream - 9/19/2018
These are all what are called "data types".  We operate on them using what are called operators.  The `numbers.cpp` file will show you how we create instances of these data types and manipulate them.  We will also go over some limitations of these data types and some of how they operate under the hood.

We'll also briefly cover something called _typecasting_, which allows one data type to act like another in an expression.

## Lab 4 - Chars, strings, and string functions - 9/26/2018
Characters and strings are both data types.  They differ from ints, floats, and doubles by
storing text instead of numbers.  The `strings.cpp` file will show instantiation of characters and strings.  This will also cover some different ways to look at strings, as well as how to operate on them and observe some of their properties.

## Lab 5 - If/else, conditionals, and switch - 10/3/2018
If/else and switch are both statements that allow us to modify the flow of our programs.  To control which branch of these statements get executed, we use conditionals.  Conditionals check one value against another to determine if a block should be executed.  Conditionals for if/else and switch statements behave somewhat differently, the semantics of which, we will cover.  The lab file `conditionals.cpp` shows examples of all of these constructs, explaining their use and functionality along the way.

## Lab 6 - For and while loops - 10/10/2018
For and while loops are ways of repeating a procedure based off of conditions in our code.  In `loops.cpp`, we will go over the differences between these two constructs and show some examples of them along the way.  We will also go over how to choose which one to implement in a given scenario.

## Lab 7 - Functions - 10/31/2018 :ghost:
Functions are ways of packaging up snippets of code to be run whenever we need.  They take in data through arguments and give back return values.  `functions.cpp` goes over the basic use of functions, such as defining and calling them in our code.  

`recursive_examples.cpp` then quickly goes through some basic examples on recursion, which is a powerful programming tool that helps solve some complex problems very elegantly.  Recursion is not necessary for this week's assignments, but some extra food for thought never hurts!  See if you can find recursive solutions on your own!

## Lab 8 - Classes and OOP - 11/7/2018
Classes are ways that we can model objects to make new data structures.  You can think of a class sort of like a "blueprint" for something, and objects are the things built from those blueprints.  `oop.cpp` goes into more detail on object oriented programming, such as the parts of a class and the vocabulary you will need to describe them.  For your reference, this file also provides an example class that models a golden retriever.

`hint.cpp` will provide you with a couple of lines to get you started with this week's check plus assignment involving file I/O in C++.

## Lab 9 - File I/O and Vectors - 11/14/2018
Files are one way for us to keep data intact beyond the life of our program -- something we call "persisting" the data.  To do this, we use ifstream and ostream objects, which work similarly to other stream objects we are familiar with like cout and cin.  `files.cpp` will guide you through part of an example on file I/O with a raccoon shelter.  Feel free to experiment with this file, you will learn a lot by doing so!

`raccoons.txt` provides you with an example of a text file we might generate to represent our raccoons.  The specific format in which the raccoons are stored is not important.  Focus on the ability to parse the file and create raccoon objects.  When you wish to store your raccoons, do the opposite -- converting raccoon objects into the form you parsed them from.