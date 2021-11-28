#include <iostream>
#include <array>
#include <algorithm> 

using namespace std;

int main(){
  int inp[10], max = inp[0];
    
    for (int i = 0; i < 10; i++){
        cin >> inp[i];
        
        if(inp[i] > max) {
            max = inp[i];
        }
    }
    cout << "\nLARGEST NUMBER: " << max << endl;
}
