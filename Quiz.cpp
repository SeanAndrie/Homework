#include <iostream>
#include <string>

using namespace std;

int main() {
  string name;
    int age, average, sum, g1, g2;

    cout << "PLEASE ENTER YOUR FULL NAME: ";
    getline(cin, name);

    cout << "PLEASE ENTER YOUR AGE: ";

    while (!(cin >> age)) {
        cout << "\nERROR: INVALID INPUT\nPLEASE TRY AGAIN..." << endl;
        cin.clear();
        cin.ignore(123, '\n');
        cout << "\nPLEASE ENTER YOUR AGE: ";
    }

    cout << "\nFIRST SUBJECT: ";

    if (cin >> g1) {

        cout << "SECOND SUBJECT: ";

        if (cin >> g2) {

            sum = g1 + g2;
            average = sum / 2;

            switch (average / 10) {

            case 10:
            case 9:
            case 8:
            case 7:
                cout << "\nSTUDENT'S NAME: " << name << "\nAGE: " << age << "\nGRADE: A" << endl;
                break;

            case 6:
                cout << "\nSTUDENT'S NAME:" << name << "\nAGE: " << age << "\nGRADE: B" << endl;
                break;

            case 5:
                cout << "\nSTUDENT'S NAME:" << name << "\nAGE: " << age << "\nGRADE: C" << endl;
                break;

            case 4:
                cout << "\nSTUDENT'S NAME:" << name << "\nAGE: " << age << "\nGRADE: D" << endl;
                break;

            default:
                cout << "\nSTUDENT'S NAME:" << name << "\nAGE: " << age << "\nGRADE: F" << endl;
                break;

            }
        }

        else {
            cout << "\nERROR: INVALID INPUT\nPLEASE ENTER AN INTEGER" << endl;
        }
    }

    else {
        cout << "\nERROR: INVALID INPUT\nPLEASE ENTER AN INTEGER" << endl;
    }
}
