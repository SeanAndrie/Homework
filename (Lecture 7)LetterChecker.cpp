#include <iostream>

using namespace std;

int main()
{
    char opt;
    cout << "-LETTER CHECKER-" << endl;
    cout << "PLEASE ENTER A LETTER: ";
    cin >> opt;
    
    if (tolower(opt) == 'a' || tolower(opt) == 'e' || tolower(opt) == 'i' || tolower(opt) == 'o' || tolower(opt) == 'u'){
        cout << opt << " IS A VOWEL." << endl;
    }
    
    else if (!(isalpha(opt))){
        cout << opt << " IS NOT A LETTER" << endl;
    }
    
    else {
        cout << opt << " IS A CONSONANT." << endl;
    }
}
