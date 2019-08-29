#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;

//MODULE 0: Files, files, files
//====================

//How long does the data in a program last for?  Since the program 
//runs in memory, once the program stops, all the variables get released
//back to the system and are lost.  To keep track of our data across 
//runs of the program, we need to do something called "persisting" the data.

//One way to persist data is by use of the file system.  As our program 
//is shutting down, we can store all of our data into a file.  Then when
//our program runs again, we can check for this file to pull our data back in.

//We can use the fstream header to get access to two new objects -- ifstream 
//and ofstream, which stand for input-file stream and output-file stream 
//respectively.  As you'll see, these operate very similarly to the cin 
//and cout objects that you're already used to using.  Why?  Could this 
//have something to do with them both being streams?

//To create a stream to or from a file, we follow this basic format:

/**
 *  fileStreamType name("pathToFile");
 *  
 *  Example: ifstream file("data.txt"); //assuming same directory
 */

//MODULE 1: Vectors
//====================

//Ever hate that you need to specify the size of an array up front?  
//With a vector, you don't need to do that.  You get to just throw 
//stuff in and take it out as you want -- it will handle the the sizing.
//They're a really powerful data structure!

//We make them like this:

/**
 *  vector<Generic> name = vector<Generic>();
 *  
 *  Example: vector<Raccoon> raccoons = vector<Raccoon>();
 */

//But what the heck was that?  What is that <Generic> all about?  
//Remember that with arrays, you had to do something like: int arr[]
//Same as with arrays, you need to specify the data type.  
//You just put it inside of the two carrots.

//To modify the vector, there are two main functions you use:
//push_back -- add element to the end of the vector
//pop_back -- delete element at the end of the vector
//We can also get the number of elements in the vector with .size()

//MODULE 2: Vectors and files in their natural habitat
//====================
class Raccoon {
    private:
        string name;
        string favoriteFood;

    public:
        Raccoon(string name, string favoriteFood) {
            this->name = name;
            this->favoriteFood = favoriteFood;
        }

        string serialize() {
            return name + " " + favoriteFood;
        }

        bool matches(string query) {
            return (query == name || query == favoriteFood);
        }
};

class RaccoonShelter {
    private:
        vector<Raccoon> raccoons; //composition

        //this is tied very closely to the constructor, be careful
        Raccoon deserialize(string line) {
            istringstream iss(line);
            string name;
            string favoriteFood;
            
            iss >> name;
            iss >> favoriteFood;
            return Raccoon(name, favoriteFood);
        }

        //where could we call this?
        void getRaccoonsFromFile(string fileName){
            ifstream file(fileName.c_str());
            if(file) {
                for(string line; getline(file, line);) {
                    raccoons.push_back(deserialize(line));
                }
            }
        }

    public:
        RaccoonShelter() {
            this->raccoons = vector<Raccoon>();
            getRaccoonsFromFile("raccoons.txt");
        }

        void addRacconToShelter(Raccoon r) {
            raccoons.push_back(r);
        }

        Raccoon searchShelter(string query) {
            for(int i = 0; i < raccoons.size(); i++) {
                if(raccoons[i].matches(query))
                    return raccoons[i];
            }
        }

        //why is this public?
        void putRaccoonsInFile(string fileName){
            ofstream file(fileName.c_str());
            for(int i = 0; i < raccoons.size(); i++) {
                file << raccoons[i].serialize() << endl;
            }
        }

        // ... maybe more functions?  Who knows?
};

int main() {
    //experiment!
}