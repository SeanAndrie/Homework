#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    string fullName;
    int i, inp, fact = 1, table, power, expo = 1;
    
    cout << "PLEASE ENTER YOUR FULL NAME: ";
    getline(cin, fullName);
    
    cout << "\nHELLO, " << fullName <<". PLEASE ENTER AN INTEGER TO GET THE FOLLOWING: \n\n1. FACTORIAL\n2. MULTIPLICATION TABLE FROM 1 TO 1O\n3. POWER FROM 1 TO 10" << endl;
    cout << "\nENTER INPUT HERE: ";
    
    while (!(cin >> inp)){
        cout << "\nERROR: INVALID INPUT\nPLEASE ENTER AN INTEGER" << endl;
        cin.clear();
        cin.ignore(123, '\n');
        cout << "\nENTER INPUT HERE: ";
    }
    
    
    for (i = 1; i <= inp; i++){
        fact *= i;
    }
    
    cout << "\n1. FACTORIAL: " << endl;
    cout << endl;
    cout << "!" << inp << " = " << fact << endl;
    cout << endl;
    
    cout << "2. TABLE FROM 1 TO 10: " << endl;
    cout << endl;
    
    i = 1;
    while (i <= 10){
        table = inp * i;
        cout << inp << " X " << i << " = " << table << endl;
        i++;
    }
    
    cout << "\n3. POWER FROM 1 TO 10: " << endl;
    cout << endl;
    
    i = 0;
    
    do {
        
        power = pow(inp, expo);
        cout << inp << "^" << expo << " = " << power << endl;
        expo++;
        i++;
        
    }while(i < 10);
}

