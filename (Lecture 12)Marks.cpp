#include <iostream>

using namespace std;

int main()
{
    
    int marks[5], average, sum = 0;
    cout << "PLEASE ENTER 5 SUBJECT MARKS: " << endl;
    
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        
        while(cin.fail() || marks[i] > 100 || marks[i] < 0) {
            cout << "ERROR: INVALID INPUT" << endl;
            cin.clear();
            cin.ignore(123, '\n');
            cin >> marks[i];
        }
        
        sum += marks[i];
    }
    
    average = sum / 5;
    
    cout << "\nAVERAGE: " << average << endl;
    
}
