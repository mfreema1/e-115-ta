#include<iostream>
using namespace std;

int main() {

    int num_assignments;
    cout << "How many assignments?" << endl;
    cin >> num_assignments;

    int total = 0;
    for(int i = 0; i < num_assignments; i++) {
        int grade;
        cout << "What is the grade for this assignment?" << endl;
        cin >> grade;

        total += grade;
    }
    if(num_assignments != 0) {
        float average = total / num_assignments;
        cout << "The average is " << average << endl;
    }
    else {
        cout << "No assignments given.";                                                                                                                                                                                                                                                                                                        
    }
}