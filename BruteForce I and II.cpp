#include <iostream> 

using namespace std;

int main() {
  
  int code = 246, attempts = 5, input;

    cout << "ATTEMPTS: " << attempts << endl;
    cout << "PASSCODE: ";
    cin >> input;

    while (input != code) {
        attempts--;
        cout << "\nINVALID PASSCODE\n\nATTEMPTS LEFT: " << attempts << endl;
        cout << "PASSCODE: ";
        cin.clear();
        cin.ignore(123, '\n');
        cin >> input;

        if (input == code) {
            cout << "ACCESS GRANTED\nSAFE UNLOCKED..." << endl;
            break;
        }

        else if (attempts == 1) {
            cout << "\n\nTOO MANY ATTEMPTS\nSECURITY BREACH: PREVENTED\n\nCONTACTING AUTHORITIES..." << endl;
            return 0;
        }
    }
}
