#include <iostream>
using namespace std;

char opt;
    int num, calc;

    cout << "\nPLEASE CHOOSE CONVERSION:\n\nA. FAHRENHEIT T0 CELSIUS\nB. CELSIUS TO FAHRENHEIT" << endl;
    cin >> opt;

    while (!(tolower(opt) == 'a') && !(tolower(opt) == 'b')) {
        cout << "\nPLEASE CHOOSE CONVERSION: \n\nA. FAHRENHEIT TO CELSIUS\nB. CELSIUS TO FAHRENHEIT" << endl;
        cin.clear();
        cin.ignore(123, '\n');
        cin >> opt;
    }

    switch (tolower(opt)) {

        case 'a':
            cout << "\nPLEASE ENTER TEMP IN FAHRENHEIT: ";

            while (!(cin >> num)) {
                cout << "\nPLEASE ENTER TEMP IN FAHRENHEIT: " << endl;
                cin.clear();
                cin.ignore(123, '\n');
            }
            
            calc = (num - 32) * 5 / 9;
            cout << num <<" DEGREES IN FAHRENHEIT IS " << calc << " CELSIUS" << endl;
            break;

        case 'b':
            cout << "\nPLEASE ENTER TEMP IN CELSIUS: ";
            cin >> num;

            while (!(cin >> num)) {
                cout << "\nPLEASE ENTER TEMP IN CELSIUS: " << endl;
                cin.clear();
                cin.ignore(123, '\n');
            }

            calc = (num * 9 / 5) + 32;
            cout << num <<" DEGREES IN CELSIUS IS " << calc << " FAHRENHEIT" << endl;
            break;
    }
