#include<iostream>

using namespace std;

int main() {
    int coins;
    cout << "How many coins do you have?" << endl;
    cin >> coins;

    int total = 0;
    cout << "Please provide the value of each coin in cents: " << endl;
    for (int i = 0; i < coins; i++) {
        int temp;
        cin >> temp;
        total += temp;
    }

    cout << "Your coins are worth a total of: " << total << " cents" << endl;
    cout << "Your average coin value is: " << float(total) / coins << endl;
}