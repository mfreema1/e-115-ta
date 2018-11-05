#include<iostream>
#include<string>
using namespace std;

//MODULE 0: What is a class?
//====================

//A class is a 'blueprint' for something.  The idea is that we take some object
//and break it down into 2 main categories:

//1. Fields or properties - what something is
//2. Methods or functions - what something does

//Both of these are called "members" of the class because they exist in its definition.

//MODULE 1: Access modifiers
//====================

//We then control access to members via access modifiers, which are C++ keywords.
//The two access modifiers we will look at are 'public' and 'private.' 
//(There is another called 'protected')

//An access modifier simply controls who can look at, modify, or use something on an object.

//For example, if your house were public, then it would be like not having a lock
//on the front door.  Anybody could walk in at any time and sit at your table,
//eat your bread, etc.  They have access to properties of your house at that point.

//MODULE 2: Building something from a blueprint
//====================
//When you take the class and make an object from that 'blueprint' you are 'instantiating'
//an 'object' of that class -- We know the vocabulary is annoying.

//If this is confusing, just remember this phrase:
    
    //"An object is an instance of a class"

//To instantiate an object, we must use a special function from the class definition, called
//the 'constructor'.  The constructor has a special signature, and allows us to give an object
//some initial values.

//MODULE 3: Enough comments, let's see some code
//====================
//Say we want to have a class for a golden retriever:
//Are retrievers and dogs friends? What is a friend in C++? Google it!
class Retriever {
    private: //Private means that if given an object of the class, you can't access it
        string barkSound;
        string name;
        int hungerLevel;

        bool isFull() { //Can have private methods too
            return hungerLevel == 0;
        }

    public: //Public means that if given an object of the class, you can access it
        bool isGoodBoy; //Anyone can tell if he's a good boy

        Retriever(string name) { //Constructor! This 'constructs' an object from the class!
            this->barkSound = "Bork";
            this->hungerLevel = 3;
            this->name = name; //In this constructor, I prefer this notation
            this->isGoodBoy = true;
        }

        void bark() {
            cout << barkSound << endl;
        }

        void stealTVFromGrandma() {
            cout << "And he got away with it too..." << endl;
            isGoodBoy = false; //Modify a property of the object
        }

        void eatKibble() {
            if(isFull()) //We implicitly pass reference
                cout << "Too full, no more kibble please" << endl;
            else {
                hungerLevel--; //We can access / modify private fields with public methods
                cout << "Ate some kibble" << endl;
            }
        }

        void call() {
            cout << "Here, " << name << "!"<< endl;
        }
};

int main() {

    Retriever myDog = Retriever("Rupert"); //Call the constructor like this, passing arguments if any
    myDog.call(); //If it's public, we can access it like this

    for(int i = 0; i < 5; i++) { //Try to feed the dog a bunch
        myDog.eatKibble();
    }

    myDog.bark();
    myDog.bark();

    myDog.stealTVFromGrandma(); //We have a strange dog
    cout << myDog.isGoodBoy << endl; //Not after what just happened
    //myDog.hungerLevel //Why can't we tell how hungry the dog is?
}