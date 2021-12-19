#include <iostream>

using namespace std;

int main()
{
    int age, h;
    cout << "-THEME PARK-" << endl;
    cout << "PLEASE ENTER YOUR AGE: ";
    cin >> age;
    cout << "PLEASE ENTER YOUR HEIGHT (IN METRES): ";
    cin >> h;
    
    if (h >= 0.6 && age >= 5){
        cout << "YOU ARE PERMITTED TO RIDE THIS ATTRACTION" << endl;
    }
    
    else {
        cout << "YOU ARE NOT ALLOWED TO RIDE THIS ATTRACTION\n\nYOU MUST BE ABOVE 0.6M TALL AND AGE 5 AND ABOVE" << endl;
    }
}
