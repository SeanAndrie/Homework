#include <iostream>
#include <string>

using namespace std;

string name;
    int grades;

    cout << "PLEASE ENTER YOUR FULL NAME: ";
    cin >> name;
    getline(cin, name);

    cout << "\nPLEASE ENTER YOUR MARKS FROM 0 TO 100: ";

    while (!(cin >> grades) || grades > 100) {
        cout << "ERROR: INVALID INPUT\nINPUT MUST BE A DIGIT THAT IS WITHIN THE LIMIT\nPLEASE TRY AGAIN..." << endl;
        cin.clear();
        cin.ignore(123, '\n');
    }

    switch (grades/10) {

        case 10:
        case 9:
        case 8:
            cout << "\nSTUDENT'S NAME: " << name << "\nGRADE: A" << endl;
            break;
        case 7:
            cout << "\nSTUDENT'S NAME: " << name << "\nGRADE: B" << endl;
            break;
        case 6:
            cout << "\nSTUDENT'S NAME: " << name << "\nGRADE: C" << endl;
            break;
        case 5: 
            cout << "\nSTUDENT'S NAME: " << name << "\nGRADE: D" << endl;
            break;
        case 4:
            cout << "\nSTUDENT'S NAME: " << name << "\nGRADE: E" << endl;
            break;
        default:
            cout << "\nSTUDENT'S NAME: " << name << "\nGRADE: F" << endl;

    }
