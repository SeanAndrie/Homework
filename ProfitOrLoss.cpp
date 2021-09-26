#include <iostream>
using namespace std;

int main(){
  int sale, pur, calc;

    cout << "PLEASE ENTER PURCHASE PRICE: " << endl;
    cin >> pur;
    cout << "PLEASE ENTER SALE PRICE: " << endl;
    cin >> sale;
    calc = sale - pur;

    if (sale > pur) {
        cout << "PURCHASE PRICE: " << pur << endl;
        cout << "SALE PRICEl " << sale  << endl;
        cout << "PROFIT: " << calc << endl;
    }

    else {
        cout << "PURCHASE PRICE: " << pur << endl;
        cout << "SALE PRICE: " << sale  << endl;
        cout << "LOSS: " << calc << endl;
    }
}
