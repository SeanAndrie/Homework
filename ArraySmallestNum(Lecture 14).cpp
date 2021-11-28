#include <iostream>
#include <array>
#include <algorithm> 

using namespace std;

int main(){
  int inp[10], min = inp[0];
    
    for (int i = 0; i < 10; i++){
        cin >> inp[i];
        
        if (inp[i] < min) {
            min = inp[i];
        }
    }
    
    cout << "\nSMALLEST NUMBER: " << min << endl;
}
