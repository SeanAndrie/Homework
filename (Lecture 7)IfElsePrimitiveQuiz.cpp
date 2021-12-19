#include <iostream>

using namespace std;

void lower(string& answer){
    for (int i = 0; i < answer.length(); i++){
        answer[i] = tolower(answer[i]);
    }
}

int main()
{
    string answer;
    cout << "Q: WHAT IS THE CAPITAL OF FRANCE?\n\nA. PARIS\nB. ROME\nC. LONDON\n" << endl;
    cin >> answer;
    lower(answer);
    
    if (answer == "paris") {
        cout << "\nYOU ARE CORRECT! THE ANSWER IS A. PARIS" << endl;
    }
    
    else {
        cout << "INCORRECT! THE ANSWER IS A. PARIS" << endl;
    }
}
