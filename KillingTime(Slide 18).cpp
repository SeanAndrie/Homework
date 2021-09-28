#include <iostream>
using namespace std;

int main(){
  
char opt;
    int time, money;

    cout << "\nYou are killing time in the Dubai Mall, waiting for your  friend who is always late.\nYou receive a text telling you how  late they are going to be. " << endl;
    cout << "\nHow long are they gonna be late for? (in minutes): ";
    cin >> time;

    if (time >= 15) {
        cout << "\nDo you have money? Y/N" << endl;
        cin >> opt;

        if (tolower(opt) == 'y') {
            cout << "\nHow much money do you have?: ";
            cin >> money;

            if (money >= 5) {
                cout << "\nBuy a cup of coffee." << endl;
            }

            else {
                cout << "\nGo walk around town then." << endl;
            }

        }

        else if (tolower(opt) == 'n') {
            cout << "\nGo walk around town then." << endl;
        }

        else {
            cout << "\nInvalid Input\nEnter Y\N" << endl;
        }
    }

    else {
        cout << "\nSit in the food zone and wait." << endl;
    }
}
