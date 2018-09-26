#include<iostream>
#include<cstring> //get C-style strings, including strcat and 
#include<string>
using namespace std;

int main() {

    //MODULE 1: Data Types We Know
    //====================
    //as we've seen from last week, making primitive variables
    //is as easy as something like:

    int i;
    i = 10;
    //OR
    float y = 5;
    double d = 10;

    //floats, ints, and doubles all store numbers, but in
    //different ways.

    //we can use operators such as +, -, / and * with numerical
    //data types to use math functions that we are familiar with

    //if you're performing division between integers and you want to account
    //for the result to have a decimal, be sure to typecast an operand to the
    //level of precision you need.
    float floored = 10 / 3;
    cout << "Floored value of 10/3: " << floored << endl;
    float decimal = (float)10 / 3;
    cout << "Decimal value of 10/3: " << decimal << endl;

    //MODULE 2: New Data Types
    //====================
    //we are now going to introduce two completely new data types,
    //called "char" and "string".  These data types differ in that they
    //store text instead of numbers.  We can instantiate them in a similar
    //way.

    char s = 's'; //notice that we use single quotes ('') for char
    //Bonus: why do we need to include string, but not double, float, int, or char?
    string foo = "Look mom, I'm a string!"; //double quotes for string

    //watch this
    cout << foo << endl;

    //but wait, didn't we used to have to put double quotes in the middle?
    //cout has been taking in strings all along, but now we are doing it with
    //variables.  So long as cout gets a string, he's happy, he doesn't care
    //where it's stored, either in a variable or a literal.

    //chars are very similar to strings.  In fact, strings are made up of chars.
    //Chars represent single letters, and strings represent a series (array) of characters.

    //attempting to do any of these will result in an error:
    //char c = "c"; //double quotes not allowed
    //char multi = 'hello, I am too many letters'; //more letters than char fits
    //string str = 'can I use a single quote?'; //single quote on string

    //MODULE 3: Working with Strings
    //====================

    //we will look at two functions for interacting with strings.  Two of the most
    //useful ways to interact with strings are via the 'strcat' and 'strlen'
    //functions.

    //strcat is a way for us to append one string to another
    char bar[50] = "Hey everyone, "; //make a string with space for 50 characters
    cout << strcat(bar, "isn't C++ fun?") << endl;
    cout << bar << endl; //note that it altered it permanently and returned it

    //pretty cool huh?
    //C++ needs to be sure that we actually have room to add one string onto the
    //other, so we need to make additional room up front when we make a char[].
    //another way to do this is something like the below:
    string oz = "Toto, I've got a feeling ";
    cout << oz + "we're not in Kansas anymore" << endl;
    cout << oz << endl; //notice it wasn't changed permanently!

    //another cool thing we can do with strings is observe how long they are.
    //we use the strlen function for this.
    cout << "Length of bar: " << strlen(bar) << endl;
    //why is it 28? Because it only counts the space we've taken up, not all of
    //the space we made in advance.  If you count up the characters in 'bar',
    //including the whitespace and symobls, you'll get 28.

    //you can do some pretty cool stuff with these two methods.  Try out some ideas!

    //MINI-MODULE: cin and typing
    //====================

    //so you may notice that cin can get a little funky with strings,
    //especially when we use the >> operator

    int a;
    cout << "Enter a number" << endl; //all works fine and dandy
    cin >> a;

    string baz;
    cout << "Enter a 2-word string" << endl; //enter "Hello World" here
    cin >> baz;

    string zoobaz;
    cout << "Enter another string" << endl; //falls through, gets skipped
    cin >> zoobaz;

    cout << "Baz: " << baz << endl; //Hello
    cout << "Zoobaz: " << zoobaz << endl; //World

    //Weird! As you can see it falls through and applies to both variables.
    //Luckily, we have a way around this, and it involves clearing out cin.

    string course, ta_name;
    cout << "Enter the name of this course: " << endl; //"E 115"
    cin.ignore(); //clear out the whitespace from using >> before, prevent fall through
    getline(cin, course);

    cout << "Enter the name of the best TA: " << endl; //"Mark Freeman" obviously
    getline(cin, ta_name); //we didn't use the carrot operator again, so no need to clear with cin.ignore()

    cout << "The name of the course is: " + course << endl; //concatenation this time, for fun
    cout << "The best TA is : " + ta_name << endl;

    //this correctly assigns our variables as you can see.  Just be careful when using
    //cin with strings, be sure to check what is getting assigned, and use cin.ignore()
    //with getline() when necessary
}