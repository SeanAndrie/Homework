#include <iostream>
using namespace std;

 char opt;

    cout << "WHAT IS THE CAPITAL OF FRANCE? :\n\nA. France\nB. England\nC. Rome\n" << endl;
    cin >> opt;

    switch (tolower(opt)) {

        case 'a': 
            cout << "\nCORRECT: THE ANSWER IS PARIS" << endl;
            break;

        case 'b':
        case 'c':
            cout << "\nINCORRECT: THE ANSWER IS PARIS" << endl;
            break;

        default: 
            cout << "\nERROR: INVALID INPUT" << endl;
    }
