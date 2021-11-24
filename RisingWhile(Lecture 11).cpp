#include <iostream>

using namespace std;

int main()
{
    int i = 5;
    
    while (i >= 0){
        i--;
        int j = i;
        while (j >= 0){
            j--;
            cout << "*";
        }
        cout << endl;
    }
}
