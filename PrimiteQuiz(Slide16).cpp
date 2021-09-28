void lwr(string& answer) {
    for (int i = 0; i < answer.length(); i++) {
        answer[i] = tolower(answer[i]);
    }
}

string answer;
    
    cout << "Q: WHAT IS THE CAPITAL OF FRANCE?\n" << endl;
    cin >> answer;
    lwr(answer);
    

    if (answer == "paris") {
        cout << "\nCORRECT!\nTHE CAPITAL OF FRANCE IS PARIS" << endl;
    }

    else {
        cout << "\nINCORRECT!\nTHE CORRECT ANSWER IS: PARIS" << endl;
    }
