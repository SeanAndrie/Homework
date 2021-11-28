#include <iostream>
#include <array>
#include <algorithm> 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
  srand(time(0));
    int thousand[1000], counter = 0;
    for (int i = 0; i < 100; i++){
        thousand[i] = rand() % 100;
        cout << thousand[i] << endl;
        
        if (thousand[i] == 6){
            counter++;
        }
    }
    
    cout << "\n6 APPEARS: " << counter << " TIMES" << endl;
            return 0;
}
