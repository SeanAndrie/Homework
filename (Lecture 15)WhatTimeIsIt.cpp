#include <iostream>

using namespace std;

string greetings(int time)
{
    if (time >= 0 && time <= 11){
        return "Good Morning";
    }
    
    else if (time >= 12 && time <= 17){
        return "Good Afternoon";
    }
    
    else if (time >= 18 && time <= 21){
        return "Good Evening";
    }
    
    else if (time >= 22 && time <= 24){
        return "Good Night";
    }
    
    while(!(cin >> time) || time > 24){
        cin.clear();
        cin.ignore(123,'\n');
        cout << "Error: Invalid Input\nWhat time is it?" << endl;
    }
}

int main()
{
    cout << "What time is it?" << endl;
    int userInput;
    cin >> userInput;
    
    cout << greetings(userInput) << endl;
    return 0;
}
