#include <iostream>

using namespace std;

int main()
{
    int currentTime;
    cout << "ENTER CURRENT TIME: ";
    cin >> currentTime;
    
    if (currentTime < 12){
        cout << "GOOD MORNING!" << endl;
    }
    
    else if (currentTime < 18){
        cout << "GOOD AFTERNOON!" << endl;
    }
    
    else if (currentTime < 21){
        cout << "GOOD EVENING!" << endl;
    }
    
    else if (currentTime <= 24){
        cout << "GOOD NIGHT!" << endl;
    }
    
    else {
        cout << "TIME IS NOT VALID" << endl;
    }
}
