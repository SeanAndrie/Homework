#include <iostream> 
using namespace std;

int main(){
  int num, calc;

    cout << "PLEASE ENTER A DIGIT: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {

        calc = i * i * i;
        cout << "NUMBER IS: " << i << " AND THE CUBE IS " << calc << endl;
    }
}
