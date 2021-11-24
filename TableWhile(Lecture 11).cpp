#include <iostream>

using namespace std;

int main()
{
    int input, table, i = 1;
    cout << "PLEASE ENTER A DIGIT: ";
    cin >> input;

      while(i < 10){
          i++;
          table = input * i;
          cout << input << " X " << i << " = " << table << endl;
    }
}
