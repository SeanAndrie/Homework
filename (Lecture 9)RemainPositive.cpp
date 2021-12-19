#Include <iostream> 

using namespace std;

int main() {

  float myNum;

      cout << "ENTER AN INTEGER: ";
      cin >> myNum;

          while (myNum > 0) {
              cout << myNum << endl;
              myNum = myNum - 0.5;
          }
}
