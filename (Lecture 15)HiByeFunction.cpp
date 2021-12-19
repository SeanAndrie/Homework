#include <iostream>
using namespace std;

void welcome();
void goodbye();

int main() {
    
    welcome();
    goodbye();
    
    return 0;
}

void welcome(){
    cout << "WELCOME TO MY PROGRAM" << endl;
}

void goodbye(){
    cout << "END OF PROGRAM" << endl;
}
