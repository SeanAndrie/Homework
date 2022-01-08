#include <iostream>
#include <stdlib.h>

using namespace std;

int fact (int userNum);
void table (int userNum);

int main(){

    string userName;
    int num;

    system("CLS");
    cout << "\nPLEASE ENTER YOUR FULL NAME: ";
    getline(cin, userName);
    cout << "\nPLEASE ENTER A NUMBER (LESS THAN 10): ";

    while (!(cin >> num) || num < 0 || num > 10){

        system("CLS");
        cout << "\nERROR: INVALID INPUT" << endl;
        cin.clear();
        cin.ignore(123, '\n');
        cout << "PLEASE ENTER A NUMBER: ";
    }

    fact(num);
    cout << "\nFACTORIAL OF " << num << " IS : " << fact(num) << endl;
    cout << endl;
    table(num);
}

int fact (int userNum){
    
    int fact = 1;

    for (int i = 1; i <= userNum; i++){
        
        fact *= i;
    }

    return fact;
}

void table (int userNum){

    int mtable, pcounter = 0, ncounter = 0;

    for (int i = -5; i <= 10; i++){
        
        mtable = userNum * i;
        cout << userNum << " X " << i << " = " << mtable << endl;

        if (mtable >= 0){
            pcounter++;
        }

        else {
            ncounter++;
        }
    }

    cout << endl;
    cout << "POSITIVE NUMBERS: " << pcounter << endl;
    cout << "NEGATIVE NUMBERS: " << ncounter << endl;
}
