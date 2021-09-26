#include <iostream>
using namespace std;

int main(){
  int sides;
    cout << "PLEASE ENTER THE NUMBER OF SIDES OF THE SHAPE (3 TO 10): ";
    cin >> sides;

    if (sides == 3) {
        cout << "The Shape is a TRIANGLE" << endl;
    }

    else if (sides == 4) {
        cout << "The Shape is a RECTANGLE" << endl;
    }

    else if (sides == 5) {
        cout << "The Shape is a PENTAGON" << endl;
    }

    else if (sides == 6) {
        cout << "The Shape is a HEXAGON" << endl;
    }

    else if (sides == 7) {
        cout << "The Shape is a HEPTAGON" << endl;
    }

    else if (sides == 8) {
        cout << "The Shape is an OCTAGON" << endl;
    }

    else if (sides == 9) {
        cout << "The Shape is a NONAGON" << endl;
    }

    else if (sides == 10) {
        cout << "The Shape is a DECAGON" << endl;
    }

    else {
        cout << "ERROR: INVALID INPUT\nYOU MAY ONLY ENTER INTEGERS FROM 3 TO 10" << endl;
    }
}
  
