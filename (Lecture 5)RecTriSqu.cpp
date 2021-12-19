#include <iostream>

using namespace std;

int main()
{
    char opt;
    int l, w, h, b, s, calc;
    cout << "-AREA CALCULATOR-\n\nPLEASE CHOOSE A SHAPE:" << endl;
    cout << "\nA. RECTANGLE\nB. TRIANGLE\nC. SQUARE\n\n" << endl;
    cin >> opt;
    
    switch (tolower(opt)){
        case 'a': 
        
            cout << "\n[RECTANGLE]" << endl;
            cout << "LENGTH: ";
            cin >> l;
            cout << "WIDTH: ";
            cin >> w;
            calc = w*l;
            cout << "\nAREA: " << calc << endl;
            break;
    
        case 'b':
        
            cout << "\n[TRIANGLE]" << endl;
            cout << "BASE: ";
            cin >> b;
            cout << "HEIGHT: ";
            cin >> h;
            calc = (b*h)/2;
            cout << "\nAREA: " << calc << endl;
            break;
    
        case 'c': 
        
            cout << "\n[SQUARE]" << endl;
            cout << "SIDES: ";
            cin >> s;
            calc = s * s;
            cout << "\nAREA: " << calc << endl;
            break;
        
    }
}
