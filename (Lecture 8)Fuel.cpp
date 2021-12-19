#include <iostream>
#include <windows.h>

double pet = 2.44, die = 2.38, cost, litres;
    char opt, lvl;

    cout << "\nPLEASE ENTER FUEL LEVEL (E / F): " << endl;
    cin >> lvl;

    while (!(tolower(lvl) == 'e') && !(tolower(lvl) == 'f')) {

        cout << "\n-----------------------" << endl;
        cout << "ERROR: INVALID INPUT" << endl;
        cout << "-----------------------" << endl;
        cout << "\nPLEASE ENTER FUEL LEVEL: E / F" << endl;

        cin.clear();
        cin >> lvl;
    }

    if (tolower(lvl) == 'e') {

        cout << "\nPLEASE ENTER FUEL TYPE:\n\nP - PETROL\nD - DIESEL" << endl;
        cin >> opt;

        while (!(tolower(opt) == 'p') && !(tolower(opt) == 'd')) {

            cout << "\n-------------------------------" << endl;
            cout << "ERROR: INVALID INPUT\nPLEASE ENTER FUEL TYPE:\n\nP - PETROL\nD - DIESEL" << endl;
            cout << "-------------------------------" << endl;
            cin.clear();
            cin >> opt;
        }

        switch (tolower(opt)) {
        case 'p':
            cout << "\n[PETROL] FUEL PRICE: AED 2.44 PER LITRE\nPLEASE ENTER REQUIRED AMOUNT OF FUEL (IN LITRES): ";
            

            while (!(cin >> litres)) {
                cout << "\n---------------------" << endl;
                cout << "ERROR: INVALID INPUT" << endl;
                cout << "---------------------" << endl;
                cout << "\n[PETROL] FUEL PRICE: AED 2.44 PER LITRE\n\nPLEASE ENTER REQUIRED AMOUNT OF FUEL (IN LITRES): ";
                cin.clear();
                cin.ignore(123, '\n');
            }

            cout << "\n-----------------" << endl;
            cout << " PLEASE STANDBY" << endl;
            cout << "-----------------" << endl;
            Sleep(1000);
            cout << "\n3... ";
            Sleep(1000);
            cout << "2... ";
            Sleep(1000);
            cout << "1... ";
            Sleep(1000);
            cout << "\n\nREFILLING";
            Sleep(1000);
            cout << ".";
            Sleep(1000);
            cout << ".";
            Sleep(1000);
            cout << ".";
            Sleep(1000);
            cout << "\n\nREFILL COMPLETE!" << endl;

            cost = pet * litres;

            cout << "\nTOTAL COST: " << cost << " AED" << endl;
            break;

        case 'd':

            cout << "\n[DIESEL] FUEL PRICE: AED 2.38 PER LITRE\n\nPLEASE ENTER REQUIRED AMOUNT OF FUEL (IN LITRES): ";

            while (!(cin >> litres)) {
                cout << "\n---------------------" << endl;
                cout << "ERROR: INVALID INPUT" << endl;
                cout << "---------------------" << endl;
                cout << "\n[DIESEL] FUEL PRICE: AED 2.38 PER LITRE\nPLEASE ENTER REQUIRED AMOUNT OF FUEL (IN LITRES): ";
                cin.clear();
                cin.ignore(123, '\n');
            }

            cout << "\n-----------------" << endl;
            cout << " PLEASE STANDBY" << endl;
            cout << "-----------------" << endl;
            Sleep(1000);
            cout << "\n3... ";
            Sleep(1000);
            cout << "2... ";
            Sleep(1000);
            cout << "1... ";
            Sleep(1000);
            cout << "\n\nREFILLING";
            Sleep(1000);
            cout << ".";
            Sleep(1000);
            cout << ".";
            Sleep(1000);
            cout << ".";
            Sleep(1000);
            cout << "\n\nREFILL COMPLETE!" << endl;

            cost = die * litres;

            cout << "\nTOTAL COST: " << cost << endl;
        }

    }

    else if (tolower(lvl) == 'f') {

        cout << "\nYOUR FUEL METER IS FULL" << endl;
    }
