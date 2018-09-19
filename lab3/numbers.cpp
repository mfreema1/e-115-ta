#include<iostream> //define cout and cin
#include<bits/stdc++.h> //define int max and min
#include<float.h> //define float and double max and min
#include <typeinfo> //let us see types
using namespace std;

/**
 * Things to go over in class:
 * 1. Honor code and how it relates to this course
 * 2. Integers - what are they?
 * 3. Floats and doubles - how are they different?
 * 4. How do cin and cout work?
 * Reference: http://www.cplusplus.com/doc/tutorial/variables/
 * */

// 



int main() {

    //MODULE 1: Integers, floats, and doubles
    //====================

    //instantiating an int
    int x;
    x = 5;

    int y = 10;
    cout << typeid(y).name() << endl;

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
     * 
     * */

    //====================

    //what is a float?
    float f = 5.0;
    cout << typeid(f).name() << endl;

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
    cout << typeid(d).name() << endl;

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
    cin >> elf; //stop and wait for input from user
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
}
