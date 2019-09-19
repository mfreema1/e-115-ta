#include<iostream> //define cout and cin
#include<climits> //define int limits
#include<cfloat> //define float and double limits
using namespace std; //we're using the standard library

/**
 * Things to go over in class:
 * 1. Honor code and how it relates to this course
 * 2. Integers - what are they?
 * 3. Floats and doubles - how are they different?
 * 4. How do cin and cout work?
 * Reference: http://www.cplusplus.com/doc/tutorial/variables/
 * 
 * NOTE: To view how certain parts of this code work, you can
 * comment out sections by highlighting them with your mouse
 * and hitting "ctrl + /".  You can also add a "//" in front
 * of any line to comment out that line.
 * */

int main() {

    //MODULE 1: Integers, floats, and doubles
    //====================

    //instantiating an int
    int x;
    x = 5;

    int y = 10; //can use either form, each useful in own way

    //how big is an int?
    cout << "Biggest size of int: " << INT_MAX << endl;
    cout << "Smallest size of int: " << INT_MIN << endl;

    //where is that number from?
    /**
     * Under the hood, computers only really know ones and
     * zeros. This is called binary.  Computers use binary
     * to represent data and perform operations.  Every
     * binary digit - 0 or 1 - is called a bit.  An int
     * is 32 bits.
     * */

    //====================

    //what is a float?
    float f = 5.0;

    /**
     * Float stands for floating point.  This is
     * different from fixed point arithmetic.  We divide the
     * bits up into a sign bit, significand bits, and exponent
     * bits.  We won't go into the math, but you can get really
     * big numbers this way.  A float is also 32 bits like int.
     * Reference: https://floating-point-gui.de/formats/fp/
     * */

    //and how big is that?
    cout << "Biggest size of float: " << FLT_MAX << endl;
    cout << "Smallest size of float: " << FLT_MIN << endl;

    //====================

    //and a double?
    double d = 5.0;

    /**
     * Double is also a floating point type.  It is called
     * a double because it is 64 bits.  Doubles can store
     * enormous values, but take up more space
     * */

    //how is it different from float?
    cout << "Biggest size of double: " << DBL_MAX << endl;
    cout << "Smallest size of double: " << DBL_MIN << endl;

    //MODULE 2: Working with cout and cin
    //====================

    /**
     * So by now we know how to use cout. Cout
     * is short for "console output".  It takes
     * data and prints it to the console.  Cin is
     * the opposite, it takes stuff from the console
     * and brings back the data.  We can put this data
     * into a variable.
     * */
    int elf;
    cout << "Buddy the elf here, what's your favorite number?" << endl;
    cin >> elf; //stop and wait for input from user, store in elf
    cout << "Yeah, I like " << elf << " too!" << endl;

    /**
     * Ever wonder why we use << and >>? These are called
     * operators in C++, and they are one way to interact
     * with something like cout or cin.  Can you think of
     * another operator?
     * 
     * More generally, an operator is any kind of symbol
     * that helps us perform an operation on an operand
     * 
     * Cout and cin are sometimes operands.
     * 
     * +, -, /, and * are all operators too, actually,
     * even the = is, and it means assignment to a variable.
     * They're just more familiar to you.  We use them
     * in C++ to operate on numbers like ints, doubles, and
     * floats.  But operators can also be used on other things.
     * */

    int s = 5;
    s = s + 5;
    s = s * 5;
    cout << s << endl;

    //In fact, many programming languages open up some new
    //operators to you as well

    s += 5; //add and reassign, same as s = s + 5
    s -= 5; //subtract and reassign
    //and so on with other math stuff like division and multiplication

    //When you combine operands and operators, you will get what is
    //called an expression, which we'll save for another time.

    //MINI-MODULE: Typecasting
    //==================== 

    //It's worth noting that operators such as division (/) look at the
    //types of its operands.

    //Take for example:
    cout << "Integers 5/4: " << 5 / 4 << endl; //result is 1 because both are ints

    //This is a weird behavior at first.  When both operands are ints,
    //division results in an int.  Division of two ints does the division
    //and the decimal portion is "thrown out" or always rounded down.

    //Precision:
    //Double is the highest precision because it has the most bits, followed
    //by float and then int at the lowest precision.  The result of a division
    //is always the data type of the highest precision operand.

    //For example: 
        //If we divide a float and an int, the result is a float because
        //float is higher precision.

        //If we divide a double and an int, the result is a double because the double
        //is the higher precision.

        //If we divide a double and a float, the result is a double because the double
        //is higher precision than a float.

    //To get our ints to act like a float or a double, we can perform a typecast.
    //A typecast essentially tells one data type to act like another in an expression.
    
    //A typecast is denoted by the form:
        // (type_to_cast_to)value

    //So, to get the above equation to return a float, we could do:
    cout << "Floated 5/4: " << float(5) / 4 << endl; //result is a float

    //Or we could do something like:
    cout << "Double 5/4: " << double(5) / 4 << endl; //result is a double

    //Typecasting works with all data types, beyond just these examples, and is
    //a very useful tool to master.
}
