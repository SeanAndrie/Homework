#include <iostream>

using namespace std;

int main()
{
    int input, limit, table;
    cout << "PLEASE ENTER TABLE NO. : ";
    cin >> input;
    cout << "PLEASE ENTER TABLE LIMIT: ";
    cin >> limit;
    
    for (int i = 1; i <= limit; i++){
        table = input * i;
        cout << input << " X " << i << " = "<< table << endl;
    }
}
