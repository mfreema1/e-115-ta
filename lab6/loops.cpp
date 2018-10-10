#include<iostream>
#include <stdlib.h>  //srand and rand
using namespace std;

int main() {

    //MODULE 1: The for loop
    //====================

    //very often we will want to repeat a procedure over some finite
    //sequence.  How many times we repeat our procedure is defined by a
    //conditional expression.  The syntax of a for loop is something like:

    /*
        for(declaration; condition; increment) {
            procedure;
        }
    */

    //example: say we wanted to print the numbers from 1 to 5.  We could write:
    /*
        cout << 1 << endl;
        cout << 2 << endl;
        cout << 3 << endl;
        cout << 4 << endl;
        cout << 5 << endl;
    */

    //clearly, this is repetitive and inefficient.  We can do the exact same thing with:
    for(int i = 1; i <= 5; i++) {
        cout << i;
    }
    cout << endl;

    //this is somewhat of a trivial example though.  Say we had an array and wanted to
    //go and print the square of all of the elements:
    int arr[] = {1, 2, 3, 4, 5};
    //you can get the length of the array (vector) dynamically but we will simplify here
    for(int i = 0; i < 5; i++) {
        cout << arr[i] * arr[i] << endl;
    }

    //it's also worth noting that anything declared outside the loop can be updated
    //from inside the loop.  Anything declared inside the loop will lose its value
    //each time the loop is run.
    int counter = 0; //redundant, but as an example
    for(int i = 1; i <= 5; i++) {
        if(counter == 0)
            cout << i << ": I'm the first time through the loop!" << endl;
        else
            cout << i << ": I'm not the first time through the loop!" << endl;
        counter++;
    }

    //for loops are typically used when we have an idea for how many times the
    //loop should execute


    //MODULE 2: The while loop
    //====================

    //the while loop is another loop construct.  It has the form:

    /*
        while(condition) {
            procedure;
        }
    */

    //notice that the while loop only has the condition expression, whereas the 
    //for loop has declaration and iteration expressions as well.

    //we traditionally use while loops when we have no idea how many times we are
    //going to loop.  For example, to guess a random number we might do:

    int number;
    cout << "Enter a number between 1 and 10: ";
    cin >> number;

    srand(42); //these are function calls, don't worry about them, we'll discuss later!
    int top_secret = rand() % 10 + 1; //secret number between 1 and 10
    while(number != top_secret) {
        cout << "My guess: " << top_secret << endl;
        top_secret = rand() % 10 + 1;
    }
    //we exit the loop and know that the condition evaluated to false
    cout << "Aha! You guessed: " << top_secret << endl;


    //MINI-MODULE: Choosing between for and while
    //====================

    //we can always add in a declaration and iterator to a while loop
    int i = 1; //declaration
    while(i <= 5) {
        cout << i;
        i++; //iterator
    }
    cout << endl;

    //this is functionally the same as the for loop from line 30.  In fact,
    //we can always write while loops as for loops and vice versa, just by adding
    //or taking out the declaration and iteration expressions.  It's really up to the
    //programmer when to choose which.  Some common guidelines for that choice:

    //1. if (at runtime) we don't know how many times we're doing it, use while
    //2. if we do know at runtime, use for

    //and here's the random number evaluator from above as a for loop
    int more_top_secret = rand() % 10 + 1; 
    for(; number != more_top_secret; more_top_secret = rand() % 10 + 1) {
        cout << "My for loop guess: " << more_top_secret << endl;
    }
    cout << "Aha! You guessed: " << more_top_secret << endl; 

    //notice we can't do the below because the for loop create a variable only for the scope
    //of the for loop, so it isn't available once we exit

    /*
    for(int even_more_top_secret = rand() % 10 + 1; number != even_more_top_secret; even_more_top_secret = rand() % 10 + 1) {
        cout << "My for loop guess: " << even_more_top_secret << endl;
    }
    cout << "Aha! You guessed: " << even_more_top_secret << endl;
    */
}