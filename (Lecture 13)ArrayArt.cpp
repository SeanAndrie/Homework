#include <iostream> 

using namespace std;

int main(){
  string uwu[5][5] = {
        {"-", "-", "-", "-", "-"},
        {"-", "0", "-", "0", "-"},
        {"-", "@", "@", "@", "-"},
        {"-", "^", "^", "^", "-"},
        {"-", "v", "v", "v", "-"}
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << uwu[i][j];
        }
        cout << endl;
    }
}
