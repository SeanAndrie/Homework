#include <iostream>

using namespace std;

int main()
{
    int month;
    cout << "-DAYS OF THE MONTH-"  << endl;
    cout << "\n\nPLEASE ENTER THE NUMBER OF THE CORRESPONDING MONTH (E.G. 1: JANUARY, 2: FEBRUARY, ETC.): ";
    cin >> month;
    
    switch (month){
        
        case 1: 
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        
        cout << "\n31 DAYS";
        break;
        
        case 2:
        
        cout << "\n28 OR 29 DAYS";
        break;
        
        case 4: 
        case 6: 
        case 9: 
        case 11: 
        
        cout << "\n30 DAYS";
        break;
        
        default: 
        cout << "INVALID DATE" << endl;
        
    }
}
