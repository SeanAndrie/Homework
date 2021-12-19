#include <iostream>
using namespace std;

int main(){
  int num;
    cout << "PLEASE ENTER AN INTEGER: ";
    cin >> num;

    while (!(cin >> num)) {
        cout << "ERROR: INVALID INPUT\nPLEASE ENTER AN INTEGER" << endl;
        cin.clear();
        cin.ignore(123, '\n');
    }

    if (num % 2 == 0) {
        cout << num << " is an even number" << endl;
    }

    else {
        cout << num << " is an odd number" << endl;
    }
}
  
