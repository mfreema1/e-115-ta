#include<iostream>
#include<fstream>
using namespace std;

void questionOne() {
    // 1. What seems to be the criteria for getting on that scary ride?
    // 2. Does this person with preset values get to go on the ride?
    int age = 20;
    int weight = 100;
    int height = 36;
    if((age > 16 || weight > 90) && height > 24)
        cout << "Allow the person to get on the scary scary ride" << endl;

    // 1A: The person must be either over 16 in age or weigh over 90. They must 
    //     also be taller than 24.
    // 2A: Yes, this person gets to ride the ride.
}

void questionTwo() {
    // 1. Does the snippet print the value of z?
    // 2. Does the snippet print the value of y inside the if-block?
    // 3. Does the snippet print the value of y outside the for-block?
    for(int i = 0; i < 3; i++) {
        int y = 3;
        if(y == 3) {
            int z = 5;
            cout << "The value of z is: " << z << endl;
            cout << "The value of y is: " << y << endl;
        }
        cout << "The value of y outside the if-statement is: " << y << endl;
    }
    // cout << "The value of y outside the for-loop is: " << y << endl;

    // 1A: Yes
    // 2A: Yes
    // 3A: No, it is not defined outside the scope of the for-loop.
}

void questionThree() {
    // 1. A common problem with writing files with writeObject.open("example.txt")
    //    is that each time the program is run, the file gets overwritten.  How would 
    //    you remedy this problem?

    // Notice that this is overwritten each time, it isn't *appending* to the file
    ofstream writer;
    writer.open("example.txt");
    writer << "Hey!" << endl;
    writer.close();
    
    // 1A: We could use the ios:app option with open() to tell the writer to append
    //     to the file instead of overwriting it.

    // writer.open("example.txt", ios::app);
    // writer << "Hey again!" << endl;
    // writer.close();
}

void questionFour() {
    // 1. Is the below allowed? Can two ifstream objects open the same file at the 
    //    same time to read?
    // 2. Alternatively, can two ofstream objects open the same file at the same 
    //    time to write into it?
    ifstream reader; 
    ifstream anotherReader; 

    reader.open("example.txt"); 
    anotherReader.open("example.txt");

    // 1A: Yes the above is allowed, although probably not necessary.
    // 2A: Yes, but they would overwrite each other.
}

void questionFive() {
    // 1. When you run the below, the result is an integer.  Why?
    // 2. How would I get the result to be a decimal without changing the types of
    //    x or y?
    int x = 7;
    int y = 5;
    float result;

    result = x / y;
    cout << "Result: " << result << endl;

    // 1A: Because the two operands are integers, the result of the division is an
    //     integer.
    // 2A: We can typecast one of the operands to a float.  Either will work.

    // result = (float)x / y;
    // OR
    // result = x / (float)y;

    // This works because floats are higher precision than integers, and the result
    // will be 'promoted' to the highest precision operand. 
}

void questionSix() {
    // 1. How many times does the infamous print statement get print?
    // 2. If we wanted the program to print the statement 100 times, what would we
    // change?
    for(int i = 0; i < 39; i++)
        cout << "The infamous print statement" << endl;
    
    // 1A: 39 times.
    // 2A: Change '39' in the condition of the for-loop to '100'
}

void addTwoNumbers(int a, int b) {
    cout << "The result is: " << a + b << endl;
}

void questionSeven() {
    // 1. Please check the above function.  How would we rewrite this to *return*
    // the result instead of printing it?

    // 1A:
    // int addTwoNumbers(int a, int b) {
    //     return a + b;
    // }
}

class Ninja {
    private:
        int health;
        int ammunition;
    
    public:
        Ninja() {
            this->health = 100;
            this->ammunition = 100;
        }

        void crouch() {}

        void engageInCombat() {}

        void useAmmunition(int amount) {}

        void updateHealth(int amount) {}
};

void questionEight() {
    // 1. Please consider the above class for a Ninja.  Your Ninja has attributes
    //    such as:
    // -- A health tracker, which is a number between 0 and 100.  A health value
    //    100 means that the Ninja has full health.  The Ninja begins the game
    //    with full health
    // -- An ammunition variable, which keeps track of the amount of ammo left.
    //    This starts at 100 as well.
    //
    //    Try filling out the above class definition to include the stubbed
    //    functions.

    // 1A: You might consider something like the below, although the solution
    //     is largely subjective.

    // class Ninja {
    //     private:
    //         int health;
    //         int ammunition;
        
    //     public:
    //         Ninja() {
    //             this->health = 100;
    //             this->ammunition = 100;
    //         }

    //         void crouch() {
    //             cout << "Ducked out of the way!" << endl;
    //         }

    //         void engageInCombat() {
    //             if(ammunition == 0) { //can't fight back
    //                 if(health < 20) {
    //                     health = 0; //prevent going negative
    //                     cout << "The ninja has no health remaining!" << endl;
    //                 }
    //                 else {
    //                     health -= 20; //arbitrary values
    //                     cout << "Couldn't fight back, lost some health!" << endl;
    //                 }
    //             }
    //             else {
    //                 useAmmunition(20);
    //                 cout << "Successfully fought off the attackers!" << endl;
    //             }
    //         }

    //         void useAmmunition(int amount) {
    //             if(ammunition < amount) {    
    //                 cout << "Don't have enough ammo!  Used " << ammunition << " instead!" << endl;
    //                 ammunition = 0;
    //             }
    //             else {
    //                 ammunition -= amount;
    //                 cout << "Used " << amount << " ammo!" << endl;
    //             }
    //         }

    //         void updateHealth(int amount) {
    //             health = amount;
    //             cout << "Ninja's health was set to " << health << "!" <<endl;
    //         }

    // };
}

int main() {
    // You can invoke any function here to check its output.  Comment out the
    // others if you want to examine one.
    questionOne();
    questionTwo();
    questionThree();
    questionFour();
    questionFive();
    questionSix();
    questionSeven();
    questionEight();
}