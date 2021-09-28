#include <iostream>
#include <string> 
using namespace std;

void instrument(string& friendPlays) {
    for (int i = 0; i < friendPlays.length(); i++){
        friendPlays[i] = tolower(friendPlays[i]);
    }
}

int main() {
  
  char opt;
    bool musicalFriend;
    string friendPlays;
    string requiredInst = "guitar";
    string requiredInst2 = "drums";

    cout << "DOES YOUR FRIEND PLAY AN INSTRUMENT? Y/N" << endl;
    cin >> opt;

    if (tolower(opt) == 'y') {
        
        musicalFriend = true;

        if (musicalFriend = true) {

            cout << "\nDOES YOUR FRIEND PLAY THE [GUITAR] OR [DRUMS]?" << endl;
            cin >> friendPlays;
            instrument(friendPlays);

            if ((friendPlays.compare(requiredInst) == 0) || (friendPlays.compare(requiredInst2) == 0)) {
                cout << "\nYOU CAN START A BAND! :)" << endl;
            }

            else {
                cout << "\nYOU CANNOT START A BAND :(" << endl;
            }
        }
        
        else {
            cout << "\nYOU CANNOT START A BAND :(" << endl;
        }
    }

    else if (tolower(opt) == 'n'){
        cout << "\nYOU CANNOT START A BAND :(" << endl;
    }

    else {
        cout << "\nERROR: INVALID INPUT\nPLEASE ENTER Y/N" << endl;
    }

}
