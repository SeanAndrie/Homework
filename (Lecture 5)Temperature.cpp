#include <iostream>

using namespace std;

int main()
{
    int fahren, calc;
    cout << "-FAHRENHEIT TO CELSIUS-" << endl;
    cout << "\nPLEASE ENTER THE TEMP. IN FAHRENHEIT: ";
    cin >> fahren;
    
    calc = (fahren - 32) * 5/9;
    
    cout << endl;
    cout << fahren << "F IS " << calc << "C" << endl;
    
}
