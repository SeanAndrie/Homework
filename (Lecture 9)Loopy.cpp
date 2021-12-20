#include <iostream> 

using namespace std;

int main() {
  
  int myInt, counter = -1;

    cout << "PLEASE ENTER LIMIT: ";
    cin >> myInt;

    while (counter < myInt) {
        counter++;
        cout << counter << endl;
    }
}

 
