#include<iostream>
#include<fstream> //file stream
#include<string>
using namespace std;

int main() {
    ifstream file("data.txt"); //Declare an input file stream

    string fileContents;
    file >> fileContents; //Looks like cin... why? What kinds of streams are they?

    cout << fileContents << endl;
    //Keep in mind the input stream acts funny with whitespace
}