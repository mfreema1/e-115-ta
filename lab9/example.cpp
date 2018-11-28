#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class ContactsBook
{
  private:
    string fileName;
    ifstream read;
    ofstream write;

  public:
    ContactsBook() { //give initial state, don't open anything
        this->fileName = "Contact.txt"; 
    }

    void newcontact(string first, string last, string number, string email) {
        write.open(fileName.c_str(), ios::app); //open file for append
        write << first << " " << last << " " << number << " " << email << " " << endl; //need spaces
        write.close();
    }

    void phonesearch(string number) {
        string line;
        read.open(fileName.c_str());
            while (!read.eof()) {
                getline(read, line);
                if (line.find(number) != string::npos) {
                    cout << line << endl;
            }
        }
        read.close();
    }

    void namesearch(string first, string last) {
        string line;
        read.open(fileName.c_str());
        while (!read.eof()) {
            getline(read, line);
            if (line.find(first) != string::npos && line.find(last) != string::npos) {
                cout << line << endl;
            }
        }
        read.close();
    }

    void emailsearch(string email) {
        string line;
        read.open(fileName.c_str());
        while (!read.eof()) {
            getline(read, line);
            if (line.find(email) != string::npos) {
                cout << line << endl;
            }
        }
        read.close();
    }

    void displayAll() {
        string first, last, number, email;
        read.open(fileName.c_str());
        while (!read.eof()) {
            read >> first >> last >> number >> email;
            cout << first << " " << last << " " << number << " " << email << " " << endl; //again, need spaces
        }
        read.close();
    }
};

int main() {
    ContactsBook contacts;
    string first, last, number, email;

    int option;
    while(true) {
        cout << endl;
        cout << "Enter 1, to search for contact by number" << endl;
        cout << "2, to search for contact by name" << endl;
        cout << "3 to search for contact by email" << endl;
        cout << "4 to add a new contact" << endl;
        cout << "5 to display all contacts" << endl;
        cout << endl;
        cin >> option;

        switch(option) {
            case 1:
                cout << "Enter the contacts phone number" << endl;
                cin >> number;
                contacts.phonesearch(number);
                break;
            case 2:
                cout << "Enter the contacts first name" << endl;
                cin >> first;
                cout << "Enter the contacts last name" << endl; //typo
                cin >> last;
                contacts.namesearch(first, last);
                break;
            case 3:
                cout << "Enter the contacts email" << endl;
                cin >> email;
                contacts.emailsearch(email);
                break;
            case 4:
                cout << "Enter first name" << endl;
                cin >> first;
                cout << "Enter last name" << endl;
                cin >> last;
                cout << "Enter number" << endl;
                cin >> number;
                cout << "Enter email" << endl;
                cin >> email;
                contacts.newcontact(first, last, number, email);
                break;
            case 5:
                contacts.displayAll();
                break;
        }
    }
}