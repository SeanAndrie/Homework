#include <iostream>

using namespace std;

int main()
{
    int input, limit, table, i = 1;
    cout << "PLEASE ENTER TABLE NO. : ";
    cin >> input;
    cout << "PLEASE ENTER TABLE LIMIT: ";
    cin >> limit;
    
    while (i < limit){
        i++;
        table = input * i;
        cout << input << " X " << i << " = "<< table << endl;
    }
}
