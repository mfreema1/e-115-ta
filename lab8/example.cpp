#include<iostream>
#include<string>
using namespace std;

class VendingMachine {
    private:
        int numberOfCoke;
        int numberOfSprite;
        int numberOfWater;

        string codeOfCoke;
        string codeOfSprite;
        string codeOfWater;

        float costOfCoke;
        float costOfSprite;
        float costOfWater;

        float moneyInside;

        void dispense() {

        }

    public:
        VendingMachine() {
            this->numberOfCoke = 3;
            this->numberOfSprite = 3;
            this->numberOfWater = 3;

            this->codeOfCoke = "A1";
            this->codeOfSprite = "A2";
            this->codeOfWater = "A3";
            
            this->costOfCoke = 1.25;
            this->costOfSprite = 2.00;
            this->costOfWater = 1.00;

            this->moneyInside = 0.0;
        }

        void makeSelection() {
            
        }

        void insertMoney(float whatever) {
            if (whatever < 0) {
                cout << "Get outta here" << endl;
            } else {
                this->moneyInside += whatever;
                cout << "You inserted " << whatever << " dollars, there is " <<
                    "now " <<  this->moneyInside << " dollars in the machine." << endl;
            }
        }

        void cancel() {
            if (this->moneyInside == 0) {
                cout << "No money inserted, go away" << endl;
            } else {
                cout << "Dispensing " << this->moneyInside << " dollars back." << endl;
                this->moneyInside = 0;
            }
        }
};

int main() {
    VendingMachine machine = VendingMachine();
    machine.insertMoney(5.00);
    machine.insertMoney(2.00);
    machine.cancel();
    machine.cancel();
    machine.insertMoney(-5.00);
}