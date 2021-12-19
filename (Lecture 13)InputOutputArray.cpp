#include <iostream>

using namespace std;

int main(){
  int num[5];

    cout << "PLEASE ENTER 5 DIGITS: ";
    for (int i = 0; i < 5; i++) {
        cin >> num[i];

        while (cin.fail() || num[i] > 100 || num[i] <= 0) {
            cout << "ERROR: INVALID INPUT. " << endl;
            cin.clear();
            cin.ignore(123, '\n');
            cin >> num[i];
        }
    }
    cout << endl;
    for (auto num : num) {
        
        cout << num << endl;
    }
}
