#include <iostream> 
using namespace std;;

int main(){
  
  int sum = 0;
  
  cout << "NUMBERS DIVISIBLE BY 9: ";
  
  for (int i = 100; i <= 200; i++) {
    if ( i % 9 == 0 ) {
      cout << i << "; ";
      sum+= i;
    }
  }
  cout << endl;
  cout << "SUM: " << sum << endl;
}
