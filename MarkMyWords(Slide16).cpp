#include <ioststream>
using namespace std;
int main()
{
    int grade;
        cout << "PLEASE ENTER YOUR GRADE: " << endl;
        cin >> grade;

        if (grade >= 70) {
            cout << "GRADE: A" << endl;
        }

        else if (grade >= 60 && grade < 70) {
            cout << "GRADE: B" << endl;
        }

        else if (grade >= 50 && grade < 60) {
            cout << "GRADE: C" << endl;
        }

        else if (grade >= 40 && grade < 50) {
            cout << "GRADE: D" << endl;
        }

        else {
            cout << "GRADE: F" << endl;
        }
}
