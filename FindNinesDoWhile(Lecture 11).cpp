#include <iostream>

using namespace std;

int main()
{
  int sum = 0, i = 0;
    
    do{
        i++;
        if (i % 9 == 0){
            cout << i << endl;
            sum+= i;
        }
    }while(i <= 200);
    
    cout << "SUM: " << sum;
}
