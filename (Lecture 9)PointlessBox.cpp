#include <iostream> 

using namespace std;

int main() {
  
   int num; 
    
    while (cin >> num) {
        if (num == 1) {
            cout << "YOU HAVE ENTERED: 1" << endl;
            cin.clear();
            cin.ignore(123, '\n');
        }

        else if (num == 2) {
            cout << "YOU HAVE ENTERED: 2" << endl;
            cin.clear();
            cin.ignore(123, '\n');
        }

        else {
            cout << "ERROR: INVALID INPUT" << endl;
            cin.clear();
            cin.ignore(123, '\n');
        }
    }
}
