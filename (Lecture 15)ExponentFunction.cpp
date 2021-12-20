#include <iostream>
#include <math.h>

using namespace std;

string Expo(int num){
    int power, expo = 1;
    for (int i = 1; i <= 10; i++){
        power = pow(num, expo);
        cout << "!" << num << " = " << power << endl;
        expo++;
    }
    return "\n-CODE COMPLETED-";
}

int main()
{
    int inp;
    cout << "PLEASE ENTER AN INTEGER: ";
    cin >> inp;
    cout << endl;
    
    cout << Expo(inp) << endl;
}
