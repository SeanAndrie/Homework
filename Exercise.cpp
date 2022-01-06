#include <iostream>
#include <string>

using namespace std;

string questions(int userAge);
string response(char options);

int main()
{
    int age;
    char opt;
    
    cout << "PLEASE ENTER YOUR AGE (16 - 30): ";
    
    while (!(cin >> age) || age > 30){
        cout << "ERROR: INVALID INPUT" << endl;
        cin.clear();
        cin.ignore(123,'\n');
    }
    
    cout << questions(age) << endl;
    
    while (!(cin >> opt)){
        cout << "ERROR: INVALID INPUT" << endl;
        cin.clear();
        cin.ignore(123,'\n');
    }
    
    cout << response(opt) << endl;
}

string questions(int userAge){
    
    if (userAge >= 16 && userAge <= 21){
        return "DO YOU WANT TO GO TO THE MALL?";
    }
    
    else if(userAge >= 22 && userAge <= 30){
        return "DO YOU WANT TO GO TO HAWAII?";
    }
    
    else {
        return "YOU ARE NOT ELIGIBLE TO PARTICIPATE!";
    }
}

string response(char options){
    
    if (tolower(options) == 'y'){
        return "ENJOY YOUR TRIP!";
    }
    
    else if (tolower(options) == 'n'){
        return "CANCELLED";
    }
}
