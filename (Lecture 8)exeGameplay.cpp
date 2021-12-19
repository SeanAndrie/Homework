#include <iostream>
using namespace std;

char opt;

    cout << "DO YOU WISH TO CONTINUE THE GAME? Y/N" << endl;
    cin >> opt;

    switch (tolower(opt)) {
    case 'y':
        cout << "STARTING GAME..." << endl;
        break;

    case 'n':
        cout << "QUITTING GAME..." << endl;
        break;

    default:
        cout << "INVALID INPUT\nPLEASE TRY AGAIN" << endl;
    }
