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

    while (!(cin >> g1) || !(g1 >= 0 && g1 <= 100)) {
        cout << "\nERROR: INVALID INPUT\nPLEASE TRY AGAIN..." << endl;
        cin.clear();
        cin.ignore(123, '\n');
        cout << "NOTE: SCORE MUST BE WITHIN THE BOUNDARY ( 0 - 100 )" << endl;
        cout << "\nFIRST SUBJECT: ";
    }

    if (g1 <= 100 && g1 >= 0) {

        cout << "\nSECOND SUBJECT: ";

        while (!(cin >> g2) || !(g1 >= 0 && g1 <= 100)) {
            cout << "\nERROR: INVALID INPUT\nPLEASE TRY AGAIN..." << endl;
            cin.clear();
            cin.ignore(123, '\n');
            cout << "NOTE: SCORE MUST BE WITHIN THE BOUNDARY ( 0 - 100 )" << endl;
            cout << "\nSECOND SUBJECT: ";
        }

        if (g2 <= 100 && g2 >= 0) {

            sum = g1 + g2;
            average = sum / 2;

            switch (average / 10) {

            case 10:
            case 9:
            case 8:
            case 7:
                cout << "\nSTUDENT'S NAME: " << name << "\nAGE: " << age << "\nGRADE: A" << endl;
                cout << "\nAVERAGE: " << average << endl;
                break;

            case 6:
                cout << "\nSTUDENT'S NAME:" << name << "\nAGE: " << age << "\nGRADE: B" << endl;
                cout << "\nAVERAGE: " << average << endl;
                break;

            case 5:
                cout << "\nSTUDENT'S NAME:" << name << "\nAGE: " << age << "\nGRADE: C" << endl;
                cout << "\nAVERAGE: " << average << endl;
                break;

            case 4:
                cout << "\nSTUDENT'S NAME:" << name << "\nAGE: " << age << "\nGRADE: D" << endl;
                cout << "\nAVERAGE: " << average << endl;
                break;

            default:
                cout << "\nSTUDENT'S NAME:" << name << "\nAGE: " << age << "\nGRADE: F" << endl;
                cout << "\nAVERAGE: " << average << endl;
                break;

            }
        }
    }
