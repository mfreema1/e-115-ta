#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

class ContactsBook {

    private:
        class Contact {

            private:
                string firstName;
                string lastName;
                string phone;
                string email;

            public:
                Contact(string firstName, string lastName, string phone, string email) {
                    this->firstName = firstName;
                    this->lastName = lastName;
                    this->phone = phone;
                    this->email = email;
                }

                string serialize() {
                    return firstName + " " + lastName + " " + email + " " + phone + "\n";
                }

                bool match(string term) {
                    return term == firstName ||
                    term == lastName ||
                    term == phone ||
                    term == email;
                }
        };

        vector<Contact> contacts;
        string fileName;

        void loadContacts() {
            string line;
            ifstream whatever(fileName);
            
            while(!whatever.eof()) {
                getline(whatever, line);
                Contact contact = deserialize(line);
                contacts.push_back(contact);
            }
        }

        Contact deserialize(string line) {
            istringstream input(line);
            
            string firstName, lastName, phone, email;
            input >> firstName >> lastName >> phone >> email;
            return Contact(firstName, lastName, phone, email);
        }

    public:
        void addContact(string firstName, string lastName, string phone, string email) {
            Contact contact = Contact(firstName, lastName, phone, email);
            contacts.push_back(contact);
        }

        void deleteContact() {
            // todo
        }

        void displayContacts() {
            for (Contact contact : contacts) {
                cout << contact.serialize();
            }
        }

        void searchContacts(string term) {
            for (Contact contact : contacts) {
                if (contact.match(term)) {
                    cout << contact.serialize();
                    return;
                }
            }

            cout << "Not found" << endl;
        }

        void saveContacts() {
            ofstream whatever(fileName);

            for (int i = 0; i < contacts.size(); i++) {
                Contact contact = contacts[i];
                whatever << contact.serialize();
            }
        }

        ContactsBook() {
            this->contacts = vector<Contact>();
            this->fileName = "data.txt";
            loadContacts();
        }
};

int main() {
    ContactsBook contactsBook = ContactsBook();
    contactsBook.displayContacts();

    cout << endl;
    contactsBook.addContact("Example", "McSample", "123-456-7890", "foo@bar");
    contactsBook.saveContacts();
    contactsBook.displayContacts();
}