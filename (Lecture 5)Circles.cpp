#include <iostream>

using namespace std;

int main()
{
    int r, circ, area;
    
    cout << "PLEASE ENTER THE RADIUS OF THE CIRCLE TO GET THE FOLLOWING: \n\nA. AREA\nB. CIRCUMFERENCE\n" << endl;
    cin >> r;
    
    area = 3.14 * r * r;
    circ = 2 * 3.14 * r;
    
    cout << "\nCIRCUMFERENCE: " << circ << endl;
    cout << "AREA: " << area << endl;
}
