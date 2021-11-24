#include <iostream>

using namespace std;

int main()
{
    int i = 5;
    while (i >= 0){
        i--;
        int j = i;
        while (j >= 0){
            cout << "*";
            j--;
        }
        cout << endl;
    }
    int k = 0;
    while (k < 5){
        k++;
        int l = 0;
        while (l < k){
            cout << "*";
            l++;
        }
        cout << endl;
    }
}
