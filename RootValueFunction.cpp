#include <iostream>
#include <math.h>

using namespace std;

string RootValue(double num){
    double root, tag = 1;
    for (int i = 1; i <= 10; i++){
        double sscript = 1/tag;
        root = pow(num, sscript);
        cout << tag << " ROOT VALUE OF " << num << " = " << root << endl;
        tag++;
    }
    
    return "\n-CODE COMPLETED-";
}

int main()
{
    double inp;
    cout << "PLEASE ENTER AN INTEGER: ";
    cin >> inp;
    cout << endl;
    
    cout << RootValue(inp) << endl;
    
}
