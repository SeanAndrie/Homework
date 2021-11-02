#include <iostream>

using namespace std;

int main(){
double magn;

    cout << "PLEASE ENTER MAGNITUDE: ";
    cin >> magn;

    if (magn < 2.0) {
        cout << "MAGNITUDE: MICRO" << endl;
    }

    else if (magn >= 2.0 && magn < 3.0) {
        cout << "MAGNITUDE: VERY MINOR" << endl;
    }

    else if (magn >= 3.0 && magn < 4.0) {
        cout << "MAGNITUDE: MINOR" << endl;
    }

    else if (magn >= 4.0 && magn < 5.0) {
        cout << "MAGNITUDE: LIGHT" << endl;
    }

    else if (magn >= 5.0 && magn < 6.0) {
        cout << "MAGNITUDE: MODERATE" << endl;
    }

    else if (magn >= 6.0 && magn < 7.0) {
        cout << "MAGNITUDE: STRONG" << endl;
    }

    else if (magn >= 7.0 && magn < 8.0) {
        cout << "MAGNITUDE: MAJOR" << endl;
    }

    else if (magn >= 8.0 && magn < 10.0) {
        cout << "MAGNITUDE: GREAT" << endl;
    }

    else {
        cout << "MAGNITUDE: METEORIC" << endl;
    }
}
