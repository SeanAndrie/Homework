#include <iostream>

using namespace std;

int main()
{
    int input, fact = 1;
    cout << "PLEASE ENTER AN INTEGER: ";
    cin >> input;
    
    for (int i = 1; i <= input; i++){
        fact *= i;
    }
    cout << "!" << input << " = " << fact;
}
