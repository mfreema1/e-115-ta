#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;

class ContactsBook {

    private:
        string fileName;

        struct Contact {
            string firstName;
            string lastName;
            string phone;
            string email;
        };

        vector<Contact> contacts;

        string serialize(Contact contact) {
            return contact.firstName + " " + contact.lastName + " " +
                contact.phone + " " + contact.email + "\n";
        }

        Contact deserialize(string contact) {
            istringstream iss(contact);

            string firstName;
            string lastName;
            string phone;
            string email;

            iss >> firstName >> lastName >> phone >> email;

            Contact c = {
                firstName, lastName, phone, email
            };
            
            return c;
        }

        void loadContacts() {
            ifstream input(fileName);

            string line;
            while(!input.eof()) {
                getline(input, line);
                Contact contact = deserialize(line);
                contacts.push_back(contact);
            }
        }

        bool match(string search, Contact contact) {
            return search == contact.firstName ||
                search == contact.lastName ||
                search == contact.phone ||
                search == contact.email;
        }

    public:
        void addContact(string firstName, string lastName, string phone, string email) {
            Contact contact = {
                firstName,
                lastName,
                phone,
                email
            };
            contacts.push_back(contact);
        }

        void searchContact(string search) {
            for (Contact contact : contacts) {
                if (match(search, contact)) {
                    cout << serialize(contact);
                    return;
                }
            }
            cout << "Not found" << endl;
        }

        void deleteContact(string search) {
            for (int i = 0; i < contacts.size(); i++) {
                Contact contact = contacts[i];
                if (match(search, contact)) {
                    contacts.erase(contacts.begin() + i);
                    return;
                }
            }
            cout << "Not found" << endl;
        }

        void displayContacts() {
            for (Contact contact : contacts) {
                cout << serialize(contact);
            }
        }

        void quit() {
            ofstream output(fileName);
            for (Contact contact : contacts) {
                output << serialize(contact);
            }
        }

        ContactsBook() {
            fileName = "data.txt";
            contacts = vector<Contact>(); // empty

            loadContacts();
        }
};

int main() {
    ContactsBook book = ContactsBook();
    book.displayContacts();
    book.searchContact("Foo");
    book.searchContact("Freeman");

    book.addContact("Example", "McSample", "foo@bar", "(123)456-7890");
    book.deleteContact("Morgan");
    
    book.quit();
}