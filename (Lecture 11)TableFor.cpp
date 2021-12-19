#include <iostream>

using namespace std;

int main()
{
    int input, table;
    cout << "PLEASE ENTER A DIGIT: ";
    cin >> input;
    
    for (int i = 1; i <= 10; i++){
        
        table = input * i;
        cout << input << " X " << i << " = " << table << endl;
    }
}
