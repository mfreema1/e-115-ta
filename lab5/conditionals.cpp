#include<iostream>
#include<string>
using namespace std;

int main() {
    
    //MODULE 1: Basics of 'if' Statements
    //====================
    
    /*It's very often that we don't want our program to simply read top-to-bottom and
    execute the steps the same way every time it is run.  That wouldn't make for a
    very interesting experience for the user.  To make programs that respond to input
    or events, we can start by adding in something called an 'if' statement.

    An 'if' statement alters the flow of a program, causing a block to execute or not
    based on what is called a condition.  Let's take a look at one: 
    */
    if(true) {
        cout << "I am now one with the 'if' statement" << endl;
    }

    /*From the above code, we can deduce a few things:
    1.  The 'if' statement takes the form:

        if(condition) {
            block_of_code;
        }
        
    2.  The if statement evaluates the condition expression, and if it evaluates to 'true',
        then the code inside the block following it is run.    
    */

    //useful tip - if the code following is only one line, you don't need to supply braces
    if(true)
        cout << "If I'm a one-liner, you don't need braces" << endl;

    //MODULE 2: Expressions with Conditionals
    //====================
    
    /**
     * Of course supplying boolean values to if-statements doesn't make our code much more
     * interesting, as they will keep their value.  But if we provide expressions that evaluate
     * to booleans, we can spice up our code. 
     * 
     * Recall that expressions are simply operands mixed with operators that reuturn some kind of
     * value.  We use this returned value (true or false) to take the place of the boolean.
     */

    //For example:
    if(1 > 2) {
        cout << "I will never print" << endl;
    }

    //As you likely guessed, you can also store these values in variables and form similar expressions
    //with those.  You can use any combination of operators defined for your operand types, so long as they eventually
    //evaluate back to either 'true' or 'false'.  Some common operators for conditionals include:

    /*
        a > b   | a is greater than b
        a >= b  | a is greater than or equal to b
        a < b   | a is less than b
        a <= b  | a is less than or equal to b
        a == b  | a is equal to b
        a != b  | a is not equal to b
    */

    int x = 5;
    int y = 10;
    if(x < y) {
        cout << "Value " << x << " is less than value " << y << endl;
    }

    //MODULE 3: Else, and If-Else
    //====================

    //Now let's introduce a basic else statement.  The else statement basically says that whenever the if-statement
    //doesn't execute or evaluates to false, run this code
    string foo = "Hello";
    string bar = "Goodbye";
    if(foo == bar) {
        cout << "This is it chief" << endl;
    }
    else {
        cout << "This ain't it chief" << endl;
    }

    //We can also keep branching this stuff together to form some more interesting flows in our programs.
    //For example:
    int choice;
    cout << "Enter a number between one and three!" << endl;
    cin >> choice;

    if(choice == 1)
        cout << "1 is a good number, but it's nowhere's near as good as 3." << endl;
    else if(choice == 2)
        cout << "2 is a terrible number.  Please pick a different one next time." << endl;
    else if(choice == 3)
        cout << "Ahhh, a man of culture I see." << endl;
    else //why do we include this?
        cout << "You're a rebel! I like the way you think." << endl;
    
    //MODULE 4: The switch-case statement
    //====================
    
    /**
     * In some cases, the continued if-else logic can get messy or hard to follow.  If this happens,
     * a good solution might be to use a switch-case statement
     */

    //Switch-case statements follow this form:
        /*
            switch(expression) {
                case value1:
                    code;
                    break;
                case value2:
                    code;
                    break;
                default:
                    code;
                    break; 
            }
        */

    //In a switch statement, the cases take the value of the expression, and if it matches, it will execute
    //downward until it hits a break.  This can generate what we call "fall-through", which is a quirky functionality
    //of the switch statement.  It works like this:

    switch(1) {
        case 1:
            cout << "1 is 1, no surprise there." << endl;
        case 2:
            cout << "Wait 1 is 2? How'd we get here?" << endl;
        case 3:
            cout << "Now 1 is 3? I want to get off this ride." << endl;
    }

    //In the above example, we hit the first case, and then fall through all the rest because we never 'broke'
    //the sequence.  This functionality can be useful in some scenarios, but it often does more harm than good
    //and can be easily overlooked in debugging.

    //If we rewrote the above code as a switch statement, it would look like this:
    cout << "Enter a number between one and three" << endl;
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "1 is a good number, but it's nowhere's near as good as 3." << endl;
            break;
        case 2:
            cout << "2 is a terrible number.  Please pick a different one next time." << endl;
            break;
        case 3:
            cout << "Ahhh, a man of culture I see." << endl;
            break;
        default:
            cout << "You're a rebel! I like the way you think." << endl;
    }

    //Choosing a switch statement over a series of if-else blocks can be tricky, but here are some basic guidelines,
    //although you are always free to choose whichever implementation you feel is best:

    /**
     * 1. Switch statements are often used when we are selecting one value out of a large series of constant values,
     * as cases can only check for an integer, enumerated value, or character literal.  Logical operators with variables
     * are not allowed. (Logical operators with constants are, but they provide no value, e.g. 3 > 1 is useless as a case)
     * 
     * 2. If/else statements are better when we want to check a boolean value such as a file.exists() call, apply
     * some series of logical operators that will reduce to a boolean expression, or something else of that nature.
     * 
     * 3. Overall, if/else statements can often provide more freedom, but switch statements can be cleaner and more
     * efficient in some scenarios. More info on this @https://www.geeksforgeeks.org/switch-vs-else/ 
     */
}