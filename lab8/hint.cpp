#include<iostream>
#include<fstream> //file stream
#include<string>
using namespace std;

int main() {
    ifstream file("data.txt"); //Declare an input file stream

    string fileContents;
    file >> fileContents; //Looks like cin... why? What kinds of streams are they?

    cout << "File up to first whitespace: " << endl << fileContents << endl << endl;
    //Keep in mind the input stream acts funny with whitespace, use getline to handle

    file.seekg(0); //set the stream back to the beginning of the file
    getline(file, fileContents);
    cout << "First line of file, including whitespace: " << endl << fileContents << endl << endl;

    //Notice we didn't set the file back to the beginning so we won't get the first line
    cout << "All lines of file after password: " << endl;
    //If you wanted to read ALL lines of a file, you might do something like:
    for(string line; getline(file, line);) {
        cout << line << endl;
    }
}