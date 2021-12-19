#include <iostream>

using namespace std;

int main()
{
    char input;
    
    do{
        cout << "WOULD YOU LIKE TO QUIT? Y/N" << endl;
        cin >> input;
        
    } while(tolower(input) != 'y' && tolower(input) != 'n');
}
