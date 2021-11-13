#include <iostream>
using namespace std;

int main() {
  for (int i = 20; i <= 24; i++) {
        
        if (i % 2 == 0) {
            cout << i << " - EVEN" << endl;
        }

        else {
            cout << i << " - ODD" << endl;
        }
    }
}
