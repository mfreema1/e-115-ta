#include<iostream>
using namespace std;

//MODULE 0: What is a function?
//====================

// It's a small packet of code that you can give input to and get a predictable
// output from.  You can then call this 'packet' from many places in your code.

//MODULE 1: Function signatures
//====================

// Function signatures tell us the bits of information we need to know about
// a function in order to use it.  Signatures declare a function, but they do not
// define it.  You define a function when you give it braces.  You cannot define a
// function inside another one, such as 'main'.

// They include:
// 1. The name of the function
// 2. What it takes in (arguments or parameters)
// 3. What it gives back (return value)

/** We declare a function like this:
 
    int add(int number1, int number2);

*/

/** But we might define it like this:
   
    int add(int number1, int number2) {
        //code
    }
 
*/

//MODULE 2: Return values
//====================

// We've actually been using the keyword 'return' for a while now -- inside of
// the function 'main'.  What return does, is it hands back a value to whoever
// called the function.

// For example:
int addIntegers(int number1, int number2) {
    return number1 + number2;
}

// Note that the type of the value given to return MUST match the type that
// comes before the name of the function OR be able to be casted to it.

// So, you would techncally be allowed to do something like this:
int subtractIntegers(int number1, int number2) {
    return 'C'; //evaluates to ASCII 67
}

// But you would not be allowed to do this:
// void multiplyIntegers(int number1, int number2) {
//     return number1 * number2;
// }

// This is because the type 'void' means it returns nothing.  Type 'int' is not
// equal to or castable to type 'void' so it fails.  To return 'void' you simply
// don't type a return statement.

//MODULE3: Calling functions
//====================

// To call a function, we give its name, and then in parenthesis we pass in our
// arguments to that function.

// The order and types of the arguments are important.  You must pass them in in the same
// order that they are defined in the signature.  They must also be the same type as
// what is defined in the signature.

// You can treat a function call just like any expression, as it must evaluate to a
// value.  So, functions can be used in conditionals, assignments, etc.

int main() {
    
    // So if I want to call my function from earlier:
    cout << "Addition of 2 and 2: " << addIntegers(2, 2);

    // Note that you must have a function defined before you call it.
    // greet(); // Won't work, 'greet' is defined after 'main'.
}

void greet() {
    cout << "Hello world!" << endl;
}

// So, just a recap:
// 1. Functions are reusable code snippets with a predictable I/O
// 2. We pass functions arguments (in parenthesis) and get back a return value (can be void)
// 3. Return values and orders of arguments must match the signature when you call a function
// 4. Function calls are expressions and hence can be used anywhere else we use expressions